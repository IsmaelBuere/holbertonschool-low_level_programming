#include "main2.h"
/**
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, m;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		m = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				m = 0;
				break;
			}
		}
		if (m == 1)
			break;
	}
	return (i);
}
