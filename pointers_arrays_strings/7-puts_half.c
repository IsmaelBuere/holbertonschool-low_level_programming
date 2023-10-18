#include "main.h"
/**
 *
 *
 *
 */
void puts_half(char *str)
{
	int i = 0, leng = 0, n;

	while (str[i++])
		leng++;

	if ((leng % 2) == 0)
		n = leng / 2;

	else 
		n = (leng + 1) / 2;

	for (i = n; i < leng; i++)
		_putchar(str[i];

	_putchar('\n');
}
