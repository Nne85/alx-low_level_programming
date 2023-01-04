#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s:string
 *
 * Description:returns the length of a string.
 *
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i += _strlen_recursion(s + 1);
		i++;
	}

	return (i);
}
