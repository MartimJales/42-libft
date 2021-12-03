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
