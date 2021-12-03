#include <limits.h>

void	*calloc(size_t nmemb, size_t size)
{
	void	*new;

	if (!nmemb || !size)
		return (NULL);
	if (nmemb * size > INT_MAX)
		return (NULL);
	new = malloc(size * nmemb);
	return (new);
}
