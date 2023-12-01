#include "main.h"
/**
 * create_file - Create a function that creates a file.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: (1)
 */
int create_file(const char *filename, char *text_content)
{
	int c, tmp;
	size_t r_w;

	if (filename == NULL)
		return (-1);
	c = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (c == -1)
		return (-1);

	if (text_content != NULL)
	{
		tmp = strlen(text_content);

		r_w = write(c, text_content, tmp);

		if (r_w == -1)
		{
			write(STDERR_FILENO, "fails", 6);
			close(c);
			return (-1);
		}
	}
	close(c);
	return (1);
}