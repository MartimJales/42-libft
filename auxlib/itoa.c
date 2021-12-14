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

#include "../libft.h"
#include <stdio.h>

static char	*ft_push_str(size_t n, size_t *i, char *num)
{
	char	c;

	c = n + '0';
	num[*i] = c;
	*i = *i + 1;
	num[*i] = '\0';
	return (num);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

//Allocates (with malloc(3)) and returns a string
//representing the integer received as an argument.
//Negative numbers must be handled.
char	*ft_itoa(int n)
{
	char	*num;
	size_t	new;
	size_t	i;

	// Check the limit range of an integer number
	num = malloc(20);
	new = n;
	i = 0;
	if (n < 0)
	{
		num[0] = '-';
		i = 1;
		new = -n;
	}
	while (new > 9)
	{
		ft_push_str(new % 10, &i, num);
		printf("test: %s\n", num);
		new = new / 10;
	}
	ft_push_str(new % 10, &i, num);
	ft_reverse(num);
	return (num);
}

int	main()
{
	char	*s;
	int		num;

	num = INT_MAX;
	s = ft_itoa(num);
	printf("num: %d\n", num);
	printf("str: %s\n", s);
}
