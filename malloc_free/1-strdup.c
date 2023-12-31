#include "main.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to newly allocated
 *@str: string to copy
 *
 *Return: a array or NULL
 */
char *_strdup(char *str)
{
	char *strdup;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
		i++;

	i++;
	strdup = malloc(sizeof(*str) * i);
	if (strdup == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (str[j] != '\0')
	{
		strdup[j] = str[j];
		j++;
	}

	return (strdup);
}
