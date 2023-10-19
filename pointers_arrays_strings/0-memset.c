#include "main2.h"
#include <stdio.h>
/**
 *_memset - print a function fill memory with a constant byte
 *@s: starting address of memory to be filled
 *@b: value to evalue
 *@n: number of bytes changed
 *Return: (s)
 */
char *_memster(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
