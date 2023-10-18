#include <string.h>
#include "main.h"
/**
 *rev_string - print a reverse string
 *@s: value to evaluate
 *Return: void
 */
void rev_string(char *s)
{
	int leng = strlen(s);
	int start = 0;
	int end = leng - 1;

	while (start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
