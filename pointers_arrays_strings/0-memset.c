#include "main2.h"
#include <stdio.h>
/**
 *_memset - print a function fill memory with a constant byte
 *@s: starting address of memory to be filled
 *@b: value to evalue
 *@n: number of bytes changed
 *Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
