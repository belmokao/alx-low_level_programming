#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
	int i, j;
	if (n <= 0)
		_putchar('\n');

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < i)
			_putchar('.');
		_putchar(92);
		_putchar('\n');
	}
}
