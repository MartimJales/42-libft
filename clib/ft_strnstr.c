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

#include <unistd.h>

static int	aux(const char *big, const char *little, size_t len)
{
	while (*big && *little && len)
	{
		if (*little != *big)
		{
			return (0);
		}
		little++;
		big++;
		len--;
	}
	return (!(*little));
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	while (*big)
	{
		if (*big == *little && aux(big, little, len))
			return (char *)(big);
		big++;
	}
	return (NULL);
}
