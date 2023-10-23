#include "main2.h"
/**
 *reverse_array - finction that reverse the content
 *@a: value to evaluate
 *@n: value to evaluate
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
