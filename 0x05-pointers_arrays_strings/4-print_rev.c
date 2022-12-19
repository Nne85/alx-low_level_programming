#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: This is the input string
 * Description:  prints a string, in reverse
 * Return: a string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
