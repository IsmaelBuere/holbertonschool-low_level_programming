#include <stdio.h>
/**
 * swap_int - swaps the values of two integers.
 * @a: value to be evaluate
 * @b: value to be evaluate
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
