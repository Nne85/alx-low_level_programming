#include "main.h"

/**
 * read_textfile - reads a text file and prints it to std output
 * @filename: filename
 * @letters:number of letters to read and print
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (bytes_written);
}
