#include "main.h"

/**
*_strcat - Concatenates two strings.
*@dest: Pointer to destination string.
*@src: Pointer to source string.
*
*Return: Pointer to destination string.
*/
char *_strcat(char *dest, char *src)
{
	int length;
	int j;

	length = 0;
	while (dest[length] != '\0')
		length++;

	j = 0;
	while (src[j] != '\0')
	{
		dest[length + j] = src[j];
		j++;
	}

	dest[length + j] = '\0';

	return (dest);
}
