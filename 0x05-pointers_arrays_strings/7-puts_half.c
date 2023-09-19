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
	if (l % 2 == 0)
		i = l / 2;
	else
		i = 1 + (l / 2);
	while (s[i] != '\0')
		_putchar(s[i++]);
}
