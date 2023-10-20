#include "main2.h"
/**
 *_strstr - function that locates a sbustrin
 *@haystack: locate a substring
 *@needle: substring to locate
 *Return: ('\0')
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
	char *h = haystack;
	char *n = needle;

	while (*n && (*h == *n))
	{
		h++;
		n++;
	}

	if (*n == '\0')
	{
		return (haystack);
	}

	haystack++;
	}

	return ('\0');
}
