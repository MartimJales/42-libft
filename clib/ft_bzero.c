void	bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (s[i] && i < n)
	{
		s[i] = 0;
		i++;
	}
}
