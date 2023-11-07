#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - given as a parameter on each element of an array
 *@array: pointer to array
 *@size: number elements in array
 *@action: pointer to function
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
