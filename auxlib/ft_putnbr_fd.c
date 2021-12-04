/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:37:10 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:37:11 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Outputs the integer ’n’ to the given file
//descriptor.
void ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	x;

	x = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		x = nb * -1;
	}
	if (x > 9)
	{
		ft_putnbr_fd(x / 10);
	}
	c = (x % 10) + '0';
	ft_putchar_fd(c, fd);
}
