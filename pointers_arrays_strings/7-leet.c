#include "main2.h"
/**
 * leet - Encodes a string to 1337.
 * @str: value to evaluate
 *
 * Return: void
 */
char *leet(char *str)
{
	int r1 = 0, r2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[r1])
	{
		for (r2 = 0; r2 <= 7; r++)
		{
			if (str[r1] == leet[r2] ||
			    str[r1] - 32 == leet[r2])
				str[r1] = r2 + '0';
		}

		r1++;
	}
