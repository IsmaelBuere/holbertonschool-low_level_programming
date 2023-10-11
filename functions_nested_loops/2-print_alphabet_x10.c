#include "main.h"
/**
 * print_aplhabet_x10 - repeats the print 10 time
 * Return: void
 */
void print_aplhabet_x10(void)
{
	int z;
	char o;

	for (z = 0; z < 10; z++)
	{
		for (o = 'a'; o <= 'z'; o++)
		{
			_putchar(o);
		}
		_putchar('\n');
	}
}
