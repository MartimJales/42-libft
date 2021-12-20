/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:37:41 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:37:51 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Falta testar e dar uma segunda vista de olhos em possiveis erros

#include "libft.h"

//Allocates (with malloc(3)) and returns a substring
//from the string ’s’.
//The substring begins at index ’start’ and is of
//maximum size ’len’.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (len_s < len)
		len = len_s;
	if (start > len_s)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		*sub = 0;
		return (sub);
	}
	if (start + len > len_s)
		len -= start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
