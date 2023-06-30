#include "main.h"

/**
* _strcmp - compare two string
* @s1 : first string to campare to s2
* @s2 : second string to copare to s1
*
* Return - 0 if not fit each other or 1 if good
*/
int _strcmp(char *s1, char *s2)
{
    int i = 0;

    while(s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (0);
        i++;
    }
    return (1);
}