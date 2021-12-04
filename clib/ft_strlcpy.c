/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:50:52 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:50:54 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	len;

	len = 0;
	i = -1;
	while (len < size && src[++i])
	{
		dest[i] = src[i];
		len++;
	}
	dest[i] = '\0';
	return (len);
}
