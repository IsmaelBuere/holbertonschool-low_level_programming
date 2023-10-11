#include <stdio.h>

/**
 *
 * main - Print all single digit numers using only putchar
 *
 * Return:0
 */
int main(void)
{
	int c;
	for (c = 0; c < 10; c++)
	putchar(c + '0');

	putchar('\n');
	return (0);
}
