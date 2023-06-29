#include "main.h"
#include <stdio.h>

int main(void)
{
    char s1[98] = "hello ";
    char s2[44] = "dg ";
    char *ptr;

    ptr = _strcat(s1, s2);
    printf("%s", ptr);
    return (0);
}