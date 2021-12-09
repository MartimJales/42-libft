/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:37:19 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:37:20 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Applies the function f to each character of the
//string passed as argument, and passing its index
//as first argument. Each character is passed by
//address to f to be modified if necessary
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = -1;
	while (s[++i])
		s[i] = f(i, s[i]);
}
