/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:37:59 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/10 11:38:00 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temporary;

	if (!del)
		return ;
	while (*lst)
	{
		temporary = (*lst)->next;
		ft_lstdelone(*lst, (*del));
		*lst = temporary;
	}
	*lst = NULL;
}
