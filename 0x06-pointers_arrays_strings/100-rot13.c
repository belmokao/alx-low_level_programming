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

	while (s[i++] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
				s[i] -= 13;
		}
	}

	return (s);
}
