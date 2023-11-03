#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array
 *@nmemb: elements
 *@size: bytes size of array
 *Return: (m)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	filler = m;

	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';

	return (m);
}
