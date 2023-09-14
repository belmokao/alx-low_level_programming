/**
*_isdigit - method check for uppercase chars
*@c: is char input
*Return: return is int 0 or 1
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
