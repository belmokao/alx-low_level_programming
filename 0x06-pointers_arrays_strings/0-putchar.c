#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char a[] = "_putchar\n";
	int i = 0;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}

	return (0);
}
