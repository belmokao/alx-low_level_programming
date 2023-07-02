#include "main.h"
#include <stdio.h>

int atoii(char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-')
    {
        sign = -1;
        i = 1;
    }

    while (str[i] != '\0')
    {
        int digit = str[i] - '0';
        result = result * 10 + digit;
        i++;
    }
    return result * sign;
}

int strlenn(char *s)
{
    int i = 0;

    while (*(s + i) != '\0')
    {
        i++;
    }
    return i;
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    if (strlenn(n1) > size_r || strlenn(n2) > size_r)
        return (0);
    int resu = atoii(n1) + atoii(n2);
    printf("test %d \n", atoii(n2));
    r = (char *)resu;
    return r;
    return (0);
}
