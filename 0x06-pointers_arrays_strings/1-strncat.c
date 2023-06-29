#include "main.h"
/**
 *_strcat - function that concatenates two strings.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *
 *Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
    int length, j;

    length = 0;
    while (dest[length] != '\0')
    {
        length++;
    }
    for (j = 0; j < n; j++, length++)
    {
        dest[length] = src[j];
    }
    
    dest[length] = '\0';
    return (dest);
}