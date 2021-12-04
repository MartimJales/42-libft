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

#include <stdlib.h>

//Allocates (with malloc(3)) and returns a substring
//from the string ’s’.
//The substring begins at index ’start’ and is of
//maximum size ’len’.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	sub = malloc(len - start + 1);
	if (!sub)
		return (NULL);
	i = -1;
	while (++i < len && s[i + start])
		sub[i] = s[i + start];
	if (i < len)
		sub[i] = '\0';
	return (sub);
}
