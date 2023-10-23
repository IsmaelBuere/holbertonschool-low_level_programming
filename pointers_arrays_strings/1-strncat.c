#include "main2.h"
/**
 *_strncat - concatenate two string
 *@dest: value to evaluate
 *@src: value to evaluate
 *@n: value to evaluate
 *Return: result
 */
char *_strncat(char *dest, const char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (result);
}
