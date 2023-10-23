#include "main2.h"
/**
 *_strncpy - function that copies a string
 *@dest: value to evaluate
 *@src: value to evaluate
 *@n: value to evaluate
 *
 *Return: (r)
 */
char *_strncpy(char *dest, const char *src, int n)
{
	char *r = dest;

	while (n > 0 && (*dest = *src) != '\0')
	{
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (r);
}
