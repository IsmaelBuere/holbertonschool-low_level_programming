#include "main.h"

/**
 * clear_bit - set the opposite of the mask
 * @num: number to set
 * @index: position
 * Return: (-1) on fail, (1) on success
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int count = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	count <<= index;
	*num &= ~count;

	return (1);
}
