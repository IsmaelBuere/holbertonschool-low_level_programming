#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	size_t len = strlen(str);

	char *new_str = (char *)malloc(len + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);

	return (new_str);
}
