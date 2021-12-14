/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:37:26 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:37:28 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	find_char(int c, char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (s[i] == c);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

//Allocates (with malloc(3)) and returns a copy of
//’s1’ with the characters specified in ’set’ removed
//from the beginning and the end of the string.
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	begin;
	size_t	end;
	size_t	len_new;

	begin = 0;
	end = ft_strlen((char *)s1);
	if (!s1)
		return (NULL);
	if (!set)
	{
		new = malloc(end + 1);
		ft_strlcpy(new, s1, end + 1);
		return (new);
	}
	while (s1[begin] && find_char(s1[begin], (char *)set))
		begin++;
	if (begin == end)
		*new = 0;
	else
	{
		while (find_char(s1[end], (char *)set))
			end--;
	printf("begin: %ld\nend: %ld\n", begin, end);
	len_new = end - begin + 1;
	printf("len_new: %ld\n", len_new);
	new = malloc(len_new + 1);
	ft_strlcpy(new, s1 + begin, len_new + 1);
	}
	printf("|%s|\n", new);
	printf("strlen: %ld\n", ft_strlen((const char *)new));
	return (new);
}

int main(int argc, char **argv)
{
	printf("str: |%s|\n", argv[1]);
	printf("set: |%s|\n", argv[2]);
	printf("trimmed: |%s|\n", ft_strtrim(argv[1], argv[2]));
}


