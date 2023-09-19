#include "main.h"

/**
*puts_half - print half
*@s: input
*
*Return: return
*/
void puts_half(char *s)
{
	int l;
	int i;

	l = 0;
	while (s[l] != '\0')
		l++;

	i = l / 2;
	while (i <= l)
	{
		_putchar(s[i++]);
	}
	_putchar('\n');
}
