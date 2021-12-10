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

//The  memmove()  function  copies  n  bytes  from memory area src to memory area dest.  The memory areas may overlap: copying takes place as
//though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied  from  the
//       temporary array to dest.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*dst;
	int				i;

	str = (unsigned char *)src;
	dst = (unsigned char *)dest;
	if (!dest || !src)
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
