#include "main.h"

/**
* leet - leet methid is eccrypt some charcteter with 1337
* @str: is an argument
*
* Return: reuturn src as pointer destination
*/

char *leet(char *str)
{
    int i, j;
    char n[] = "4433007711";
    char a[] = "aAeEoOtTlL\0";

    i = j = 0;
    while (str[i] != '\0')
    {
        while(a[j] != '\0')
        {
            if (a[j] == str[i])
                str[i] = n[j]
            j++;
        }
        i++;
    }

    return (str);
}
