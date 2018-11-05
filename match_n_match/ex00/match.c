
int		match(char *s1, char *s2)
{
	if (*s1 != 0 || *s2 == '*')
	{
		write(1, 1, 1);
		return (match(s1 + 1, s2) || match(s1 + 1, s2 + 1));
	}
	if ((*s1 == *s2) && *s1 != 0 && *s2 != 0)
	{
		write(1, 2, 1);
		return (match(s1 + 1, s2 + 1));
	}
	if (*s1 == 0 && *s2 =='*')
		return (match(s1, s2 + 1));
	if (*s1 == 0 && *s2 == 0)
		return (1);
	return (0);
}
