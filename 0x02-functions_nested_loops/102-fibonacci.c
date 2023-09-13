#include "stdio.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	long int a;
	long int b;
	long int n;
	int c;

	c = 0;
	a = 1;
	b = 1;
	while (c <= 50)
	{
		if (c > 49)
			printf("%ld\n", a);
		else
			printf("%ld, ", a);
		n = a + b;
		a = b;
		b = n;
		c++;
	}
	return (0);
}
