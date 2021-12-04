/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:51:04 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:51:05 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	while (str[--size])
		if (str[size] == c)
			return (str + size);
	return (NULL);
}
