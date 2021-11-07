#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*temporary;
	temporary = malloc(sizeof)(t_list);
	if (!temporary)
		return (NULL);
	temporary->content = content;
	temporary->next = NULL;
}

int	main(void)
{

}