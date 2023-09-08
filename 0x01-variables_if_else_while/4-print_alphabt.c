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
		if (i != 'e' && i != 'q')
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
