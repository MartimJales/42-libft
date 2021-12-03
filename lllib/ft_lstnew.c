#include "../libft.h"

//Allocates (with malloc(3)) and returns a new
//element. The variable ’content’ is initialized
//with the value of the parameter ’content’. The
//variable ’next’ is initialized to NULL.
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}
