/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:50:45 by mjales            #+#    #+#             */
/*   Updated: 2021/12/11 13:50:35 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	size;

	size = ft_strlen ((char *)s);
	i = 0;
	if (!s)
		return (NULL);
	while (i <= size)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(&s[i]));
		i++;
	}
	return (NULL);
}
