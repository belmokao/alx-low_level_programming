#include "main.h"

/*
* print_alphabet_x10 - print from a to z, 10 times 
* Return - void
*/
void print_alphabet_x10(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz\n";
	int t  = 0;
	int i;

	while (t < 10)
	{
		i = 0;

		while (a[i] != '\0')
		{
			_putchar(a[i]);
			i++;
		}
		t++;
	}
}