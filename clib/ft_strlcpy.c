size_t	strlcpy(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	len;

	len = 0;
	i = -1;
	while (len < size && src[++i])
	{
		dest[i] = src[i];
		len++;
	}
	dest[i] = '\0';
	return (len);
}
