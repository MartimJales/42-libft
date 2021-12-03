#include <../libft.h>

//Deletes and frees the given element and every
//successor of that element, using the function ’del’
//and free(3).
//Finally, the pointer to the list must be set to
//NULL.
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	// I need to review this but it's not important
	if (!lst->next)
		ft_lstclear(lst->next, del);
	del(lst->conctent);
	lst = NULL;
}
