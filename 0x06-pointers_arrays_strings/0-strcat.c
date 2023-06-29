#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @src: input string
 *
 * Return: length of the string
 */
int _strlen(char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        i++;
    }

    return (i);
}

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = _strlen(dest);
    int i = 0;

    while (src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';

    return (dest);
}
