#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory
 *@b: bytes to allocate
 *
 *Return: (atr)
 */
void *malloc_checked(unsigned int b)
{
	void *atr = malloc(b);

	if (atr == NULL)
	{
		exit(98);
	}

	return (atr);
}
