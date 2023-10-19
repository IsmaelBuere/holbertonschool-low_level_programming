#include "main2.h"
/**
 *_strchr - locates a character
 *@s: string
 *@c: caracter
 *Return: (s + i)
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for(; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
