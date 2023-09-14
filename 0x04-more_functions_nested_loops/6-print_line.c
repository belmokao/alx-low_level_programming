#include "main.h"

/**
*print_line - prints numbers
*@n: is repeat time
*Return: returns nothing
*/
void print_line(int n)
{
	if (n > 0)
		while (n != 0)
		{
			_putchar('_');
			n--;
		}
	_putchar('\n');
}
