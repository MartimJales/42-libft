/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:37:05 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:37:07 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Outputs the string ’s’ to the given file
//descriptor, followed by a newline.

void	ft_putendl_fd(char *s, int fd)
{
	int	size;

	size = ft_strlen(s);
	write(fd, s, size);
	write(fd, "\n", 1);
}
