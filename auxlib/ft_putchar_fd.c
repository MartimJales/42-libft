/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:36:59 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:37:01 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Outputs the character ’c’ to the given file
//descriptor.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, c, 1);
}
