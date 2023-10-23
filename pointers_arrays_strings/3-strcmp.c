#include "main2.h"
/**
 *_strcmp - function that compares two strings
 *@s1: value to evaluate
 *@s2: value to evaluate
 *
 *Return: s1 - *s2
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
