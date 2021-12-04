/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:52:14 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:52:16 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../libft.h>

//Iterates the list ’lst’ and applies the function
//’f’ to the content of each element. Creates a new
//list resulting of the successive applications of
//the function ’f’. The ’del’ function is used to
//delete the content of an element if needed.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	// This is a mess, I need to rethink that better
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
