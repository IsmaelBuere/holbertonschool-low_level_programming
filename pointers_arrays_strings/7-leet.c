#include "main2.h"
/**
 *
 *
 *
 */
char *leet(char *str)
{
	char *r = str;

	while (*r)
	{
		if ((*r == 'a') || (*r == 'A'))
		{
			*r = '4';
		}
		else if ((*r == 'e') || (*r == 'E'))
		{
			*r = '3';
		}
		else if ((*r == 'o') || (*r == 'O'))
		{
			*r = '0';
		}
		else if ((*r == 't') || (*r == 'T'))
		{
			*r = '7';
		}
		else if ((*r == 'l') || (*r == 'L'))
		{
			*r = '1';
		}
		r++;
	}
	
	return str;
}
