#include "main.h"

/**
 * set_bit - sets a specific bit at a particular position
 * @num: the pointer to the bit being set
 * @index: the position being referred to
 * Return: (-1) if fail, (1) if success
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int count = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	count <<= index;

	*num = *num | count;
	return (1);
}