#include "main.h"
/**
 * print_times_table - print table n times
 * @n: repeat factor
 */
void print_times_table(int n)
{
int i, j, c;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
c = j * i;
if (j == 0)
{
_putchar(c + '0');
}
else if (c < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(c + '0');
}
else if (c >= 10 && c < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
else if (c >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((c / 100) + '0');
_putchar(((c / 10) % 10) + '0');
_putchar((c % 10) + '0');
}
}
_putchar('\n');
}
}
}
