/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:52:02 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:52:04 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../libft.h>

//Adds the element ’new’ at the beginning of the
//list.
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	**old;

	old = lst;
	new->next = *old;
	lst = *new;
}
