#include "main.h"

/**
* leet - leet methid is eccrypt some charcteter with 1337
* @str: is an argument
*
* Return: reuturn src as pointer destination
*/

char *leet(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'A')
            str[i] = 4;
        if (str[i] == 'e' || str[i] == 'E')
            str[i] = 3;
        if (str[i] == 'o' || str[i] == 'O')
            str[i] = 0;
        if (str[i] == 't' || str[i] == 'T')
            str[i] = 7;
        if (str[i] == 'l' || str[i] == 'L')
            str[i] = 1;
        i++;
    }

    return (str);
}