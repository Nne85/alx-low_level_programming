#include <stdio.h>

/**
 * main - display name of program
 * @agrc:int
 * @argv:string
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
