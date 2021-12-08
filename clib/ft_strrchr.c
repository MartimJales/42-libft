/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:51:04 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 12:20:56 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//RETURN PROBLEM - CANNOT RETURN CONST CHAR

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	while (s[--size])
		if (s[size] == c)
			return (s + size);
	return (0);
}
