#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *x, char *y);

/**
 * new_dog - makes a new dog, memory and all
 * @name: name to create mem and assign to for dog
 * @age: age to assign to for dog
 * @owner: owner to create mem and assign to for dog
 *
 * Return: pointer to new dog_t (struct dog)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	if (name == NULL)
		new_dog->name = NULL;
	else
	{
		new_dog->name = malloc(_strlen(name) + 1);
		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		new_dog->name = _strcpy(new_dog->name, name);
	}
	if (owner == NULL)
		new_dog->owner = NULL;
	else
	{
		new_dog->owner = malloc(_strlen(owner) + 1);
		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
		new_dog->owner = _strcpy(new_dog->owner, owner);
	}
	new_dog->age = age;
		return (new_dog);
}
/**
 * _strcpy - copies string from y to x
 * @x: pointer to destination of string
 * @y: pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *x, char *y)
{
	char *a = x;

	while (*y)
		*a++ = *y++;
	*a = '\0';
	return (x);
}
/**
 * _strlen - gets len of str
 * @s: string to get length of
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
