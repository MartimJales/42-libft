/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:37:13 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:37:14 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Outputs the string ’s’ to the given file
//descriptor.

void	ft_putstr_fd(char *s, int fd)
{
	int	size;

	size = ft_strlen(s);
	write(fd, s, size + 1);
}
