#include <../libft.h>

//Returns the last element of the list.
t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
		lst = lst->next;
	return (*lst);
}
