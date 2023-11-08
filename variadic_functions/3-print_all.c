#include "variadic_functions.h"
/*
 *print_all - function that prints anything
 *@format: list of types of arguments
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;

	unsigned int i = 0, z, x = 0;
	char *str;
	const char t_args[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		z = 0;
		while (t_args[z])
		{
			if (format[i] == t_args[z] && x)
			{
				printf(", ");
				break;
			} z++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), x = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), x = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), x = 1;
			break;
		case 's':
			str = va_arg(args, char *), x = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			} printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(args);
}
