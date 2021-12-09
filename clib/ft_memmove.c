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
	size_t			i;
	unsigned char	*new;
	int				size;

	str = (unsigned char *)src;
	dst = (unsigned char *)dest;
	size = ft_strlen((char *)str);
	i = 0;
	new = malloc(sizeof(void *) * (size + 1));
	while (str[i] && i < n)
	{
		new[i] = str[i];
		i++;
	}
	i = -1;
	while (new[++i])
		dst[i] = new[i];
	dst[i] = 0;
	return ((void *)(dst));
}
