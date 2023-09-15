#include "main.h"

/**
*print_square - prints squares
*@size: parameter
*Return:returns nothing
*/
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j++ < size)
			_putchar('#');
		_putchar('\n');
		i++;
	}
}
