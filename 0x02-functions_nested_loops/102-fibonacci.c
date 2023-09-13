#include "stdio.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int a;
	int b;
	int n;

	a = 1;
	b = 1;
	while (a < 50)
	{
		printf("%d, ", a);
		n = a + b;
		a = b;
		b = n;
	}
	return (0);
}
