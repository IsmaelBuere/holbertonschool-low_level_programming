#include "main.h"
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: (c)
  */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: The name of the file to append to.
 * @text_content: The content to append to the file.
 *
 * Return: (1)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int r_w, file;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		r_w = write(file, text_content, _strlen(text_content));

		if (r_w == -1)
		{
			close(file);
			return (-1);
		}
	}

	if (close(file) == -1)
		return (-1);

	return (1);
}
