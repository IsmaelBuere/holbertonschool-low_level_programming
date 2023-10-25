#include "main.h"
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: value to evaluate
 *
 *Return: the natural saquare
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 1));
	}
}
