#include "main.h"

/**
 * print_last_digit - do required task
 * @a: input
 *
 *Return: ouput desired
 */
int print_last_digit(int a)
{
    int b;

    if (a < 0)
        a = -a;
    
    b = a % 10;

    _putchar(b + '0');

    return (b);
}