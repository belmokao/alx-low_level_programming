#include "main.h"

int atoi(char *str)
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

int strlen(char *s)
{
    int i = 0;

    while (*(s + i) != '\0')
    {
        i++;
    }
    return 0;
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    if (strlen(r) < size_r)
        return (0);
    int resu = atoi(n1) + atoi(n2);
    return (char *)resu;
    return (0);
}
