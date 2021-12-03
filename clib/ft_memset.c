void	*memset(void *s, int c, size_t n)
{
	int	i;

	i = -1;
	while (++i < n)
		s[i] = c;
	return (s);
}
