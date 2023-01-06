#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: int
 * @argv: string
 *
 * Return: all argment
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
