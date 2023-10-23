#include "main2.h"
/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int r = 0;

	while (str[r])
	{
		if (str[r] >= 'a' && str[r] <= 'z')
			str[r] -= 32;

		r++;
	}

	return (str);
}
