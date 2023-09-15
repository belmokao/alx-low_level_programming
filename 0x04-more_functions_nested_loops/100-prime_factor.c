#include <stdio.h>

/**
*main - check the code
*
*Return: Always 0
*/
int main(void)
{
	int p;
	long int f;
	long int n;

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
	printf("%ld\n", f);

	return (0);
}

