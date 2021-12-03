#include <stdlib.h>

//Applies the function ’f’ to each character of
//the string ’s’ , and passing its index as first
//argument to create a new string (with malloc(3))
//resulting from successive applications of ’f’.

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		size;
	int		i;

	i = -1;
	size = strlen(s);
	new = malloc(sizeof(char) * size);
	while (s[++i])
		new[i] = f(i, s[i]);
	new[i] = '\0';
	return new;
}
