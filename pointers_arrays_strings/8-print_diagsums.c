#include "main2.h"
#include <stdio.h>
/**
 *print_diagsums - fuction print the sum of two diagonals
 *@a: 2d array
 *@size: size x size of the square matrix
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int n = 0;
	int m = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		n += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		m += a[i];
	}

	printf("%d, %d\n", n, m);
}
