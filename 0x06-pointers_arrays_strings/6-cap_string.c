#include "main.h"

/**
 * cap_string - method upercase chars
 * @str: argurment to upper
 *
 * Return: return upper case string
 */
char *cap_string(char *str)
{
	int i;
	char dots[] = ",;.!?(){}\n\t\" ";
	int j;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (dots[j] != '\0')
		{
			if (str[i] == dots[j] && (str[i + 1] >= 97 && str[i + 1] <= 122))
				str[i + 1] -= 32;
			j++;
		}
		i++;
	}
	return (str);
}
