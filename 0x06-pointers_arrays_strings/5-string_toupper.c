#include "main.h"

/**
 * string_toupper - method upercase chars
 * @str: argurment to
 *
 * Return: return upper case string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
