#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *link = "Programming is like building a multilingual puzzle\n";

	while (*link != '\0')
		write(1, link++, 1);
	return (0);
}
