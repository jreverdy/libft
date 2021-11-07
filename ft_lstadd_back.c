#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temporary;

	if (!alst)
		return ;

	temporary = ft_lstlast(*alst);
	temporary->next = new;
}