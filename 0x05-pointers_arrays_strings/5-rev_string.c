#include "main.h"

/**
*rev_string - rev string
*@s: input
*
*Return: Void
*/
void rev_string(char *s)
{
	int i;
	int l;

	l = 0;
	while (s[l] != '\0')
		l++;
	i = 0;
	while (i < l / 2)
	{
		char t = s[i];

		s[i] = s[l - 1 - i];
		s[l - 1 - i] = t;
		i++;
	}
}
