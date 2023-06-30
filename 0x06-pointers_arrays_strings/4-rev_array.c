#include "main.h"

/**
 * _reverse_array - reverse aray
 * @a: array input
 * @n: size of
 *
 * Return - void
 * */
void reverse_array(int *a, int n)
{
	int tmp;

	while (n > 0)
	{
		tmp = a[n];
		a[n - 1] = a[n];
		a[n] = tmp;
	}
}
