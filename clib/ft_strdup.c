/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:50:47 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:50:49 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*new;

	len = ft_strlen((char *)s);
	new = malloc(len + 1);
	i = -1;
	while (s[++i])
		new[i] = s[i];
	new[i] = 0;
	return (new);
}
