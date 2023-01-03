#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Description: function that changes lowercase letters to uppercase
 *
 * Return: ni
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
