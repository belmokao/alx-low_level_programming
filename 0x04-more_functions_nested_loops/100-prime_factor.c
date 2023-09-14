#include "stdio.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
       
	n = 1231952;

	while (n%2 == 0)
	{
		printf("%d\n", n);
		n /=2;
	}


	return (0);
}
