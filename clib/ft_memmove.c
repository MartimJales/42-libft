/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:50:39 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 12:20:12 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*dst;
	int				i;

	str = (unsigned char *)src;
	dst = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		i = (int)n;
		while (--i >= 0)
			dst[i] = str[i];
	}
	else
	{
		i = -1;
		while (++i < (int)n)
			dst[i] = str[i];
	}
	return ((void *)(dst));
}
