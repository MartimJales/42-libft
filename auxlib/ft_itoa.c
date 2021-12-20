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

#include "libft.h"

static char	*ft_push_str(size_t n, size_t *i, char *num)
{
	char	c;

	c = n + '0';
	num[*i] = c;
	*i = *i + 1;
	return (num);
}

static void	ft_reverse(char *str)
{
	char	c;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(str);
	while (i < (len / 2))
	{
		c = str[len - i - 1];
		str[len - i - 1] = str[i];
		str[i] = c;
		i++;
	}
}

static int	power_ten(int n)
{
	int		power;
	size_t	new;

	power = 1;
	new = n;
	if (n < 0)
	{
		power++;
		new *= -1;
	}
	while (new > 9)
	{
		new /= 10;
		power++;
	}
	return (power);
}

//Allocates (with malloc(3)) and returns a string
//representing the integer received as an argument.
//Negative numbers must be handled.
char	*ft_itoa(int n)
{
	char	*num;
	size_t	new;
	size_t	i;
	size_t	len;

	len = power_ten(n);
	num = malloc(len + 1);
	if (!num)
		return (NULL);
	new = n;
	i = 0;
	if (n < 0)
	{
		num[len - 1] = '-';
		new *= -1;
	}
	while (new > 9)
	{
		ft_push_str(new % 10, &i, num);
		new = new / 10;
	}
	ft_push_str(new % 10, &i, num);
	num[len] = 0;
	ft_reverse(num);
	return (num);
}
