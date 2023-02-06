#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "main.h"

#define BUFF_SIZE 1024
/**
 * cp - copies src to desinations
 * @file_to: the destination file
 * @file_from: the source file
 *
 * Return: integer
 */
int cp(char *file_from, char *file_to)
{
	int file_from_fd, file_to_fd, rd, wrt;
	char buffer[BUFF_SIZE];

	file_from_fd = open(file_from, O_RDONLY);
	if (file_from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	file_to_fd = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}

	while ((rd = read(file_from_fd, buffer, BUFF_SIZE)) > 0)
	{
		wrt = write(file_to_fd, buffer, rd);
		if (wrt == -1 || wrt != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}
	}

	if (close(file_from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from_fd);
		exit(100);
	}

	if (close(file_to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_fd);
		exit(100);
	}
	return (0);
}
/**
 * main - the main function
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(argv[1], argv[2]);

	return (0);
}

