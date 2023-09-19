#include "main.h"

/**
*_puts - pust
*@str: inputs
*
*Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\0');
}
