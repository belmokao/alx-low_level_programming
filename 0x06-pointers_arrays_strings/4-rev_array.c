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
	int tmp, s, e;

	s = 0;
	e = n - 1;
	while (s < e)
	{
		tmp = a[s];
		a[s] = a[e];
		a[e] = tmp;
		s++;
		e--;
	}
}
