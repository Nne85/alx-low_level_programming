#include <stdio.h>

/**
 * main - display name of program
 * @agrc:int
 * @argv:string
 *
 * Return:int
 */
int main (int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
