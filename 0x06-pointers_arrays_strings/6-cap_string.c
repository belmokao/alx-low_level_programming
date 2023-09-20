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
	str[i] = '\0';
	return (str);
}
