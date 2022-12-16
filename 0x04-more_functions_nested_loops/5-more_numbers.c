#include "main.h"

/**
 *  print_most_numbers - Print the numbers since 0 up to 9
 *
 *  Description: Print_most_numbers - Print the numbers since 0 up to 9
 *
 *  Return: The numbers since 0 up to 9
 */
void more_numbers(void)
{
	int i, j;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			 _putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
