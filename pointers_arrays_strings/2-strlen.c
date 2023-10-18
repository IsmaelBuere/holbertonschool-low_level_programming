#include <stdio.h>
/**
 *_strlen - returns the length of a string.
 *@s: value to evaluate
 *Return: leng
 */
int _strlen(char *s)
{
	int leng = 0;
	
	while (*s != '\0')
	{
		leng++;
		s++;
	}

	return leng;
}
