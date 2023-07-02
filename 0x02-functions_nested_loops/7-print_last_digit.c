#include "main.h"

/**
 * print_last_digit - do required task
 * @a: input
 * 
 *Return: ouput desired
*/
int print_last_digit(int a)
{
    if (a < 0)
        a = a * -1;
    int b = a % 10;

    return b;
}