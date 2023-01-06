#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc:int
 * @argv:string
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, n, s, ch;
	int c[] = {25, 10, 5, 2, 1};

	i = n = s = ch = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	s = atoi(argv[1]);

	if (s <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (c[i] != '\0')
	{
		if (s >= c[i])
		{
			n = s / c[i];
			ch += n;
			s -= c[i] * n;
		}

		i++;
	}
	printf("%d\n", ch);
	return (0);
}
