#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @n: an integer
 *
 * Return: NULL or a pointer to the concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int n1, n2, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	if (n >= n2)
		n = n2;
	s = malloc(sizeof(char) * (n1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = n1; j < n1 + n; j++)
		s[j] = s2[j - n1];
	s[j] = '\0';
	return (s);
}
