#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str:string
 *
 * Return: a char
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];

	s[l] = '\0';

	return (s);
}
