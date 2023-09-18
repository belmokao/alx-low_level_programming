#include "main.h"

/**
*_strlen - calc str
*@s: input
*
*Return: length
*/
int _strlen(char *s)
{
  int i;
i = 0;
while (s[i] != '\0')
  i++;
return (i);
