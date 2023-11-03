#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}

	int *arr = (int *)malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	int i;

	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
