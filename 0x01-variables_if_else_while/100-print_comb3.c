#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	i = 48;
	while (i <= 56)
	{
		j = 49;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (j != 57)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		j = 49;
		i++;
	}
	putchar('\n');
	return (0);
}
