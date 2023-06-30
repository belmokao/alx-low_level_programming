#include "main.h"

/**
 * string_toupper - method upercase chars
 * @str: argurment to
 *
 * Return: return upper case string
 */
char *string_toupper(char *str)
{
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
