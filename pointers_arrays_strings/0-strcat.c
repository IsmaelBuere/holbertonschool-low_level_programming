#include "main3.h"
/**
 *_strcat - concatenates two string
 *@dest: value to evaluate
 *@src: value to evaluate
 *Return: (r)
 */
char *_strcat(char *dest, char *src)
{
	char *r = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (r);
}
