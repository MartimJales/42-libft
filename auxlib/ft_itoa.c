/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:36:36 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:36:53 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//Allocates (with malloc(3)) and returns a string
//representing the integer received as an argument.
//Negative numbers must be handled.
char	*ft_itoa(int n)
{
	char			*num;
	unsigned int	new;
	int				i;

	// Check the limit range of an integer number
	num = malloc(20);
	new = n;
	i = 0;
	if (n < 0)
	{
		num[0] = '-';
		i = 1;
		new = n * -1;
	}
	if (n > 9)
	{
		num = ft_itoa(new / 10);
	}
	return (ft_push_str(new % 10, &i, num));
}

char	*ft_push_str(unsigned int n, int *i, str num)
{
	char	c;

	c = n + '0';
	num[*i] = c;
	*i = *i + 1;
	num[*i] = '\0';
	return (num);
}
