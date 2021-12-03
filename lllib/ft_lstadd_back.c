#include <../libft.h>

//Adds the element ’new’ at the end of the list.
void ft_lstadd_back(t_list **lst, t_list *new)
{
	while (lst->next)
		lst = lst->next;
	lst->next = new;
}
