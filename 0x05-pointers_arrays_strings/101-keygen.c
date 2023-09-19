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
	do {
		c = (rand() / 2)% 128;
		if (c >= '!'){
			putchar(c);
			x++;
		}
	}
	putchar('\n');
	return (0);
}
