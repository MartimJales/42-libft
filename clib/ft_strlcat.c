#include <string.h>

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	remain;
	int		i;

	len = ft_strlen(dst);
	size -= len;
	i = -1;
	while (src[++i] && size > 0)
	{
		dst[i + len] = src[i];
		size--;
	}
	// Check the maths later!!!
	if (!size)
		dst[i + len] = '\0';
	return (i + len);
}
