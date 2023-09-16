#include "main.h"

/**
*print_triangle - prints a diagonal
*@size:parameter
*
*Return: returns nothing
*/
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');

	i = 1;
	while (i <= size)
	{
		j = 0;
		while (j++ < size - i)
			_putchar(' ');
		k = 0;
		while (k++ < i)
			_putchar('#');
		_putchar('\n');
		i++;
	}
}
