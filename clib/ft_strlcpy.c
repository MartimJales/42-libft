/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:50:52 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 12:20:42 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	len;

	len = 0;
	i = -1;
	while (len < size && src[++i])
	{
		dst[i] = src[i];
		len++;
	}
	dst[i] = '\0';
	return (len);
}
