#include "main.h"
#include <stdlib.h>
/**
 *str_concat - function that conectates two string
 *@s1: frist string
 *@s2: second string
 *Return: (strdup)
 */
char *str_concat(char *s1, char *s2)
{
	char *strdup;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	strdup = malloc(sizeof(char) * (i + j + 1));
	if (strdup == NULL)
		return (NULL);

	i = j = 0;
	while (s1[1] != '\0')
	{
		strdup[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{ strdup[i] = s2[j];
		i++, j++;
	}

	strdup[i] = '\0';

	return (strdup);
}
