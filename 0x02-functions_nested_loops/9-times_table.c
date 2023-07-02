#include "main.h"

/**
 * times_table - calculate
 *
 * Retrun: void
 */
void times_table(void)
{
	int i, c, j;

	i = 0;
	c = 0;
	while (i < 10)
	{
		j = 0;
		c = 0;
		while (j < 10)
		{
			if (c < 10)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(c + '0');
			}
			else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			c = c + i;
			j++;
		}
		_putchar('\n');
		i++;
		c++;
	}
}
