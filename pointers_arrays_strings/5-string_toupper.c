#include "main2.h"
/*
 *string_toupper - changes all lowercase letter to uppercase
 *@str: value to evaluate
 *
 *Return: (str)
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
