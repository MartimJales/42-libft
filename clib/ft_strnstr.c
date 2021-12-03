#include <unistd.h>

static int	aux(const char *big, const char *little, size_t len)
{
	while (*big && *little && len)
	{
		if (*little != *big)
		{
			return (0);
		}
		little++;
		big++;
		len--;
	}
	return (!(*little));
}

char	*strnstr(const char *big, const char *little, size_t len)
{
	while (*big)
	{
		if (*big == *little && aux(big, little, len))
			return (big);
		big++;
	}
	return (NULL);
}
