/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:50:13 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 12:19:41 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new;

	// if (!nmemb || !size)
	// 	return (NULL);
	if (nmemb * size > INT_MAX)
		return (NULL);
	new = malloc(size * nmemb);
	if (!new)
		return (NULL);
	ft_bzero(new, size * nmemb);
	return (new);
}
