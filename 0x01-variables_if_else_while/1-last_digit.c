#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int t;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	t = n % 10;
	c = t;
	if (t < 0)
		c = t * -1;
	if (c > 5)
		printf("Last digit of %d is %d and is greater than 5", n, t);
	else if (c > 0 && c < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, t);
	else if (c == 0)
		printf("Last digit of %d is 0 and is 0", n);
	return (0);
}
