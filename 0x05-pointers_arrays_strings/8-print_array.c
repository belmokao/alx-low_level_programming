#include <stdio.h>

/**
*print_array - print 
*@a: array of ints
*@n: n
*
*Return: Void
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i < n - 1)
			printf("%d, ", a[i++]);
		else
			printf("%d", a[i++]);
	}
}
