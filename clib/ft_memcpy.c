/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:50:36 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 12:20:06 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*dst;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	str = (unsigned char *)src;
	dst = (unsigned char *)dest;
	i = -1;
	while (++i < n)
		dst[i] = str[i];
	return ((void *)dst);
}
