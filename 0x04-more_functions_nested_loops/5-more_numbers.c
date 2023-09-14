#include "main.h"

/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: returns nothing
*/
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
			else
			{
				_putchar('0' + j);
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
