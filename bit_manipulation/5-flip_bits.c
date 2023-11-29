#include "main.h"

unsigned int get_length(unsigned long int num);
/**
 * flip_bits -  returns the number of bits to be flipped in 'n' to give 'm'
 * @n: first number provided
 * @m: second number provided
 * Return: (count)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count, a, b, current;
	int bit_1, bit_2;

	a = get_length(n);
	b = get_length(m);
	current = (a > b) ? a : b;

	count = 0;
	for (i = 0; i < current; i++)
	{
		bit_1 = n & 1;
		bit_2 = m & 1;

		if (bit_1 != bit_2)
			count++;

		n >>= 1;
		m >>= 1;
	}
	return (count);
}

/**
 * get_length - returns the number of bits in a number
 * @num: number to consider
 *
 * Return: count
 */
unsigned int get_length(unsigned long int num)
{
	unsigned int count;

	if (num == 0)
		return (1);
	for (count = 0; num != 0; count++)
		num >>= 1;
	return (count);
}
