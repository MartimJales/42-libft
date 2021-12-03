#include <../libft.h>

//Iterates the list ’lst’ and applies the function
//’f’ to the content of each element.
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
