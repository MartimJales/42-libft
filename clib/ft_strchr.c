char	*strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (str + i);
	return (NULL);
}
