#include "main.h"

/**
* _islower - chekc chars is lowwer
* @c : input char
*
* Return: 0 or 1 in return
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
