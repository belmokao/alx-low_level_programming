#include "main.h"

/**
 * rot13 - encrypt method with 13 logic
 * @s: source string
 *
 * Return: return destination
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] > 'A' && s[i] <= 'Z'))
			s[i] += 13;
		i++;
	}

	return (s);
}
