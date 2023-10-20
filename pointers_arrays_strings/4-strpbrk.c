#include "main2.h"
/**
 *_strpbrk - searching a string for any bytes
 *@s: string
 *@accept: set of byte
 *Return: (&s[i)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
		if (s[i] == accept[n])
			return (&s[i]);
		}
	}
	return ('\0');
}
