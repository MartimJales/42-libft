/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:37:21 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:37:23 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//Falta testar e dar uma segunda vista de olhos em possiveis erros

#include "libft.h"

//Allocates (with malloc(3)) and returns a new
//string, which is the result of the concatenation
//of ’s1’ and ’s2’.
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	size1;
	size_t	size2;
	char	*new;

	size1 = ft_strlen((char *)s1);
	size2 = ft_strlen((char *)s2);
	new = malloc(size1 + size2 + 1);
	i = -1;
	while (++i < size1)
		new[i] = s1[i];
	while (i < size1 + size2)
	{
		new[i] = s2[i - size1];
		i++;
	}
	new[i] = 0;
	return (new);
}
