#include <stdio.h>
/**
 *
 *
 */
void print_rev(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
	{
		leng++;
	}
	
	for (int i = leng - '1'; i >= '0'; i--)
	{
		putchar(s[i]);
	}
	putchar('\n')
}
