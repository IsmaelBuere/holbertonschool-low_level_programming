#include "main.h"
/**
  * main - Entry point
  * @arg_count: Argument count
  * @arg_vector: Argument vector
  *
  * Return: void
  */
int main(int arg_count, char **arg_vector)
{
	if (arg_count != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_file(arg_vector[1], arg_vector[2]);
	exit(0);
}
/**
  * cp_file - a program that copies the content of a file to another file.
  * @src: The source file path.
  * @destination: The destination file path.
  * Return: void
  */
void cp_file(const char *src, const char *destination)
{
	int s_fd, d_fd, b_r;
	char buffer[1024];

	s_fd = open(src, O_RDONLY);
	if (!src || s_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	d_fd = open(destination, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((b_r = read(s_fd, buffer, 1024)) > 0)
	{
		if (write(d_fd, buffer, b_r) != b_r
		|| d_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination);
			exit(99);
		}
	}

	if (b_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(s_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s_fd);
		exit(100);
	}

	if (close(d_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d_fd);
		exit(100);
	}
}
