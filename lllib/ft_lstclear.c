/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:52:05 by mjales            #+#    #+#             */
/*   Updated: 2021/12/08 15:41:49 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Deletes and frees the given element and every
//successor of that element, using the function ’del’
//and free(3).
//Finally, the pointer to the list must be set to
//NULL.
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	// I need to review this but it's not important
	ft_lstiter(*lst, del);
	// if (!(*lst->next))
	// 	ft_lstclear(lst->next, del);
	// del(lst->content);
	// lst = NULL;
}
