#include "main.h"

void print_alphabet_x10(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz\n";
	int t  = 0;
	while (t < 10)
	{
		int i = 0;
		while (a[i] != '\0')
		{
			_putchar(a[i]);
			i++;
		}
		t++;
	}
}
