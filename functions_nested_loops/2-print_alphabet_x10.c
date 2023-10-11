#include "main.h"
/**
 * print_aplhabet_x10 - repeats the print 10 time
 * Return: void
 */
void print_aplhabet_x10(void)
{
	int c;
	char i;

	for (c = 0; c < 10; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');

		c++;
	}
}
