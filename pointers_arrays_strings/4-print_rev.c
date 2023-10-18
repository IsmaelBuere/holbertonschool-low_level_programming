#include <stdio.h>
#include "main.h"
/**
 *prin_rev - take the function string.
 *@s: value taken from main
 *Return: 0
 */
void print_rev(char *s)
{
	int leng;

	for (leng = 0; s[leng] != '\0'; leng++)
	{
	}
	for (leng = leng - 1; leng >= 0; leng--)
	{
		_putchar(s[leng]);
	}
	_putchar('\n');
}
