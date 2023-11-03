#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
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
