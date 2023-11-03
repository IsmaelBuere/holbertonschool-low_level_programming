#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	unsigned int total_size = nmemb * size;
	unsigned char *byte_ptr = (unsigned char *)ptr;

	for (unsigned int i = 0; i < total_size; i++)
	{
		byte_ptr[i] = 0;
	}
	return (ptr);
}
