#include <stdio.h>

/**
 * main -  prints the name of the file it was compiled from
 *
 * Return: file name
 */
int main(void)
{
	printf("FILE: %s\n", __FILE__);
}
