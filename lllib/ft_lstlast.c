/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:52:12 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:52:13 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../libft.h>

//Returns the last element of the list.
t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
		lst = lst->next;
	return (*lst);
}
