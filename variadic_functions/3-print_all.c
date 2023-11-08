#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/*
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;

	char c;
	int i;
	float f;
	char *s;

	int f_a = 1;
	char *separator = "";

	va_start(args, format);

	while (format && format[f_a - 1] != '\0')
	{
		char c_f = format[f_a - 1];

		if (c_f == 'c')
		{
			c = va_arg(args, int);
			printf("%s%c", separator, c);
		}
		else if (c_f == 'i')
		{
			i = va_arg(args, int);
			printf("%s%d", separator, i);
		}
		else if (c_f == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%s%f", separator, f);
		}
		else if (c_f == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
			{
				printf("%s%s", separator, s);
			}
		}

		if (c_f == 'c' || c_f == 'i' || c_f == 'f' || c_f == 's')
		{
			separator = ", ";
		}

		f_a++;
	}

	printf("\n");
	va_end(args);
}
