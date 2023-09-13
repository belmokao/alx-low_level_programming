#include "stdio.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int c;


	i = 0;
	c = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			c += i;
		i++;
	}
	printf("%d\n", c);
	return (0);
}
