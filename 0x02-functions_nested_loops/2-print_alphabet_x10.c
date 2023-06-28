#include "main.h"

/*
* print_alphabet_x10 - print from a to z, 10 times
* Return - void
*/
void print_alphabet_x10(void)
{
	int t  = 0;
	int i;

	while (t < 10)
	{
		i = 'a';

		while (i < 'z')
		{
			_putchar(i);
			i++;
		}

		_putchar('\n');
		t++;
	}
}