#include "main.h"

void print_alphabet_x10(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz\n";
	int t  = 0;
	while (t < 10)
	{
		print_alphabet();
		t++;
	}
}
