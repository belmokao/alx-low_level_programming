#include "main.h"

/**
 * atoii - Convert a string to an integer.
 * @str: The input string.
 *
 * Return: The integer value of the string.
 */
int atoii(char *str)
{
	int result = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		int digit = str[i] - '0';

		result = result * 10 + digit;
		i++;
	}
	return (result);
}

/**
*strlenn - length
*@s: input
*
*Return: length
*/
int strlenn(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
 * infinite_add - Add two numbers represented as strings.
 * @n1: The first number string.
 * @n2: The second number string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Return: A pointer to the result or 0 if it doesn't fit.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlenn(n1);
	int len2 = strlenn(n2);

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		if (k >= size_r - 1)
			return (0);
		r[k] = '0' + (sum % 10);
		carry = sum / 10;
		i--;
		j--;
		k++;
	}
	r[k] = '\0';

	int start = 0;
	int end = k - 1;

	while (start < end)
	{
		char temp = r[start];

		r[start] = r[end];
		r[end] = temp;
		start++;
		end--;
	}
	return (r);
}

