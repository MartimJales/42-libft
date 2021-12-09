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

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	int		i;

	len = ft_strlen(dst);
	size -= len;
	i = -1;
	while (src[++i] && size > 0)
	{
		dst[i + len] = src[i];
		size--;
	}
	// Check the maths later!!!
	if (!size)
		dst[i + len] = '\0';
	return (i + len);
}
