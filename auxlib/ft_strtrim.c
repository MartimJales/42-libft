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

#include "libft.h"

static int	find_char(int c, char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (s[i] == c);
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
	while (s1[begin] && find_char(s1[begin], (char *)set))
		begin++;
	if (begin == end)
	{
		new = malloc(1);
		*new = 0;
		return (new);
	}
	while (find_char(s1[end], (char *)set))
		end--;
	len_new = end - begin + 1;
	new = malloc(len_new + 1);
	ft_strlcpy(new, s1 + begin, len_new + 1);
	return (new);
}
