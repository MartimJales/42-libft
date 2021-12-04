/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:52:00 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 12:15:42 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../libft.h>

//Adds the element ’new’ at the end of the list.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (lst->next)
		lst = lst->next;
	lst->next = new;
}
