#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		putchar(i++);
	}

	i = 65;
	while (i <= 90)
	{
		putchar(i++);
	}
	putchar('\n');
	return (0);
}
