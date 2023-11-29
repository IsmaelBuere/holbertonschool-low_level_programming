#include "main.h"

/**
 * print_binary - converts the decimal format number into binary
 * @n: decimal number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	static int count;

	if (n == 0 && count > 0)
		return;
	else if (n == 0)
	{
		_putchar('0');
		return;
	}
    i = (n & 1);
	count++;
	print_binary(n >>= 1);
	_putchar('0' +  i);