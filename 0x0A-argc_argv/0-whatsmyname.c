#include <stdio.h>

/**
 * main - display name of program
 * @agrc: Number of command line arguments
 * @argv: Array name
 *
 * Description: program that prints its name
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
