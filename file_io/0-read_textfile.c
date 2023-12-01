#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: (count)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, count;

	char *tmp;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	tmp = malloc(sizeof(char) * letters);

	if (!tmp)
	{
		close(file);
		return (0);
	}

	count = read(file, tmp, letters);

	if (count == -1)
	{
		free(tmp);
		close(file);
		return (0);
	}

	write(STDOUT_FILENO, tmp, count);

	free(tmp);
	close(file);
	return (count);
}
