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
        b = a * -1;

    int c = b % 10;

    _putchar(c);

    return c;
}