void rev_string(char *s)
{
	while (*s != '\0')
	{
		char c = *(s + 1);
		*(s + 1) = *s;
		*s = c;
		s++;
	}
}
