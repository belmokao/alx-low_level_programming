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
	int l;

	srand(time(0));
	l = (rand() / 4) % 128;
	while (x <= l)
	{
		c = (rand() / 2)% 128;
		putchar(c);
		x++;
	}
	return (0);
}
