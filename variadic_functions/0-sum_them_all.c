#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - return the sum of paramters
 *@n: numer of paramters
 *@...: a variable number of paramters
 *Return: (sum)
 */
int sum_them_all(const unsigned int n, ...)
{

	unsigned int sum, i = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
