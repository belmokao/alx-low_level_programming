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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int t = n % 10;

	if (t > 0)
		printf("Last digit of %d and is greater thant 5", n);
	else if (t > 0 && t < 6)
		printf("Last digit of %d is less than 6 and not 0", n);
	else if (t == 0)
		printf("Last digit of %d is 0 and is 0", n);
	return (0);
}
