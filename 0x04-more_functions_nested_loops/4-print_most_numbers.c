#include "main.h"

/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: returns nothing
*/
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i % 2 == 0 && i <= 9)
		_putchar('0' + i++);
}
