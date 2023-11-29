#include "main.h"
/**
 *
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	unsigned int result = 0;
	char current_c;

	while ((current_c = *b++) != '\0')
	{
		if (current_c != '0' && current_c != '1')
		{
			return (0);
		}

		result = (result << 1) + (current_c - '0');
	}

	return (result);
}
