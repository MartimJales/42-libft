/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:50:49 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:50:49 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dst < size - 1 && size > 0)
	{
		while (src[i] && len_dst + i < size - 1)
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = 0;
	}
	if (len_dst >= size)
		len_dst = size;
	return (len_dst + len_src);
}
