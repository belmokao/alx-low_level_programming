#include "main.h"
#include <stdio.h>
/**
*atoii - ato
*@str: inpupt
*
*Return: int
*/
int atoii(char *str)
{
	int result;
	int i;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		int digit = str[i] - '0';

		result = result * 10 + digit;
		i++;
	}
	return (result);
}

/**
*strlenn - length
*@s: input
*
*Return: length
*/
int strlenn(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
*infinite_add - infiinte
*@n1: input 1
*@n2: input 2
*@r: riri
*@size_r: size of buffer
*
*Return: buffer
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int resu;
	int i;
	int j;

	if (strlenn(n1) >= size_r || strlenn(n2) >= size_r)
		return (0);
	resu = atoii(n1) + atoii(n2);
	i = 0;
	while (resu > 0)
	{
		r[i] = '0' + resu % 10;
		resu /= 10;
		i++;
	}

	j = 0;
	while (i > j)
	{
		char c = r[j];

		r[j] = r[i - 1];
		r[i - 1] = c;
		j++;
		i--;
	}
	*(r + strlenn(r)) = '\0';
	return (r);
}
