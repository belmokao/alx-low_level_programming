#include "main.h"

/**
 * _abs - abs any negative value
 * @a: input value
 *
 *Return: desired ouput
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
