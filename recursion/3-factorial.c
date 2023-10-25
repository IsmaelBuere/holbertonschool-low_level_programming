#include "main.h"
/**
 *factorial - function returns the factorial of given a number
 *@n: value to evaluate
 *Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1);
	}
}
