#include "stdio.h"

/**
* main - check the code
*
* Return: Always 0.
*
* isprime - chekc n is prime number
* @n: input var
* Return: 0 or 1 dependent in case
*/
int isprime(int n)
{
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (1);
}

int main(void)
{
	int p, f;
	long long int n;

	n = 612852475143;
	p = 2;
	f = 2;
	while (n > 1)
	{
		if (n % p == 0 && isprime(p))
		{
			n /= p;
			if (p > f)
				f = p;
		}
		else
		{
			p++;
		}
	}
	printf("%d", f);

	return (0);
}
