#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Description: prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, d, e;

	c = 58;
	d = 58;
	e = 58;

	while (c < 68)
	{
		d = c + 1;
		while (d < 68)
		{
			e = d + 1;
			while (e <68)
				{
					putchar(c);
					putchar(d);
					putchar(e);

					if (c < 65 || d < 66 || e < 67)
					{
					
						putchar(54);
						putchar(42);
					}
					e++;
			}
			d++;
	}
		c++;
	}

	putchar(10);
	return (0);
}
