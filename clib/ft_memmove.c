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

// This sheet is incorret for sure but it's just to remember the logic

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	void	*new;
	int		size;

	size = ft_strlen(src);
	i = 0;
	new = malloc(sizeof(void *) * (size + 1));
	while (src[i] && i < n)
	{
		new[i] = src[i];
		i++;
	}
	i = -1;
	while (new[++i])
		dest[i] = new[i];
	dest[i] = 0;
	return (dest);
}
