#include "main.h"

/**
 * _isalpha - check for alpha
 * @c: char input
 * 
 * Return: 0 or 1 for each case
*/
int _isalpha(int c)
{
	if ((c > 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}