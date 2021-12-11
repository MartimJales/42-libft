/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:51:04 by mjales            #+#    #+#             */
/*   Updated: 2021/12/11 13:51:54 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen ((char *)s);
	if (!s)
		return (NULL);
	while (size >= 0)
	{
		if (s[size] == (unsigned char)c)
			return ((char *)(&s[size]));
		size--;
	}
	return (NULL);
}
