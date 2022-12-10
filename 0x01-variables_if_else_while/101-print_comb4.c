#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Description: prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d;
	int e;

	for (c = 0; c < 8; c++)
	{
		for (d = c + 1; d < 9; d ++)
		{
			for (e = d +1; e < 10; e++)
				{
					putchar((c % 10) + '0');
					putchar((d % 10) + '0');
					putchar((e % 10) + '0');

					if (c == 7 && d == 8 && e ==9)
						continue;
					
						putchar(',');
						putchar(' ');
					}
			}
	}
	putchar('\n');
	return (0);
}
