#include "main2.h"
#include <stdio.h>
/**
 *
 *
 */
char *_memster(char *s, char b, unsigned int n)
{
	char *start = s;
	
	while (n-- > 0)
	{
		*s = b;
		s++;
	}
	return start;
}
