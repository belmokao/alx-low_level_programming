#include "main.h"

/**
*_atoi - method print chars number
*@s: string intput
*
*Return: return int converter from string
*/
int _atoi(char *s)
{
	char sign;
	unsigned int n;

	sign = '+';
	n = 0;
	while (*s != '\0')
	{
		if (*s == '-' && sign == '-')
			sign = '+';
		else if (*s == '-' && sign == '+')
			sign = '-';
		if (*s >= '0' && *s <= '9')
			n = (*s - '0') + (n * 10);
		if ((*(s + 1) < '0' || *(s + 1) > '9') && n != 0)
			break;
		s++;
	}
	if (sign == '-')
		return (-n);
	else
		return (n);
}
