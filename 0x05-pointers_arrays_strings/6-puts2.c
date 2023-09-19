#include "main.h"

/**
*puts2 - put string
*@str: input
*
*Return: return void
*/
void puts2(char *str)
{
	while (*str != '\0')
	{
		int a = *str - '0';
		if (a % 2 == 0)
			putchar(str);
		str++;
	}
}
