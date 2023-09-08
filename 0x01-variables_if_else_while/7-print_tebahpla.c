#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		putchar(i--);
	}
	putchar('\n');
	return (0);
}
