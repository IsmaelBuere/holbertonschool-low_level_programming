#include <stdio.h>
/** swap_int - swaps the values of *a and *b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
