#include "main.h"

/**
 * binary_to_uint - convert the binary number to a decimal
 * @b: points to a string of 0's and 1's
 * Return: (c)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b == '1')
			c = (c << 1) | 1;
		else if (*b == '0')
			c <<= 1;
		else
			return (0);
		b++;
	}

	return (c);
}
