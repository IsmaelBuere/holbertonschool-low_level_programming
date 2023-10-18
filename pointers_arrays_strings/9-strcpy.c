#include "main.h"
/**
 *_strcpy - copie a string pointed, including the
 *terminating null byte to the bugger
 *@dest: a buffer
 *@src: source string to copy
 *Return: dest
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;
	
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
