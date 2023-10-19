#include "main2.h"
/**
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int leng = 0;
	int m;

	while (*s)
	{
		m = 0;
		char *a = accept;

		while (*a)
		{
			if (*s == *a) 
			{
				m = 1;
				break;
			}
			a++;
		}

		if (!m)
		{
			return (leng);
		}

		leng++;
		s++;
	}

	return (leng);
}
