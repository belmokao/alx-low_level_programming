#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Maximum number of characters to concatenate from src.
 *
 * Return: Pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
    int length = 0;
    int j = 0;

    while (dest[length] != '\0')
    {
        length++;
    }

    while (j < n && src[j] != '\0')
    {
        dest[length + j] = src[j];
        j++;
    }

    dest[length + j] = '\0';

    return dest;
}
