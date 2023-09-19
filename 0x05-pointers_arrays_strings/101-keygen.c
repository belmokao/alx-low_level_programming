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
	x = 0;
	do {
		c = (rand() / 2)% 128;
		if ((c >= 32 && c <= 47) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
			putchar(c);
			x++;
		}
	} while (x < 14);
	putchar('\n');
	return (0);
}
