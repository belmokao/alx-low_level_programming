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
	int c;

	c = 49;
	i = 48;
	while (i <= 56)
	{
		j = c;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (i < 56)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		c++;
		j = c;
		i++;
	}
	putchar('\n');
	return (0);
}
