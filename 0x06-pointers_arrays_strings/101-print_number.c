#include "main.h"

/**
* print_number - method to print integers
* @n: numbere input
*
* Return - void
*/
void print_number(int n){
    if (n > -2147483648 || n <= 2147483647)
	{
		if (n == -2147483648)
		{
			_putchar('-');
			_putchar('2');
			print_number(147483648);
			return ;
		}
		else if (n >= 10)
		{
			print_number(n / 10);
			print_number(n % 10);
		}
		else if (n < 0)
		{
			n = -n;
			_putchar('-');
			print_number(n);
		}
		else
			_putchar(n + '0');
	}
}