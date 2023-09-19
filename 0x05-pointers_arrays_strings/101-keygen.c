#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	int x;

	srand(time(0));
	while (x <= 14)
	{
		c = (rand() / 2)% 128;
		putchar(c);
		x++;
	}
	putchar('\n');
	return (0);
}
