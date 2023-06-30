#include "main.h"

/**
* _strncpy - copype
* @dest - destination string
* @src - src string
* @n - number of character to copy in
*/
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    while(i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    return (dest);

}