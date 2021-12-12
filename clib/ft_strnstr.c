/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:51:02 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:51:02 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little || !big)
		return (NULL);
	if (!little || !little[0])
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && i + j < len)
			j++;
		if (!little[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
