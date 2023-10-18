#include "main.h"
/**
 *_strcpy - copie a string pointed, including the
 *terminating null byte to the bugger
 *@dest: a buffer
 *@src: source string to copy
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}
	return (dest);
}
