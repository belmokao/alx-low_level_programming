#include "main.h"
/**
 *_strcat - function that concatenates two strings.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *
 *Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
    int length, j;

    length = 0;
    while (dest[length] != '\0')
    {
        length++;
    }

    j = 0;
    while (src[j] != '\0')
    {
        dest[length + j] = src[j];
    }
    
    dest[length] = '\0';

    return (dest);
}