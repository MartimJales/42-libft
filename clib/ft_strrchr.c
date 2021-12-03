char	*strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	while (str[--size])
		if (str[size] == c)
			return (str + size);
	return (NULL);
}
