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
        b = -1 * a;
    
    int r = b % 10;

    _putchar(r);

    return (r);
}