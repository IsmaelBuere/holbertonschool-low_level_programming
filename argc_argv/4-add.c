#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds positive numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Retunr: 0 on success or 1 on failure
 */
int main(int argc, char *argv[])
{
	int i, r, n = 0;

	for (i = 1; i < argc; i++)
	{
		for (r = 0; argv[i][r] != '\0'; r++)
		{
			if (argv[i][j] < '0' || argv[i][r] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		n += atoi(argv[i]);
	}

	printf("%d\n", n);

	return (0);
}
