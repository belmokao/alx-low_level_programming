#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i++);
	}
	i = 97;
	while (i <= 102)
	{
		putchar(i++);
	}
	putchar('\n');
	return (0);
}
