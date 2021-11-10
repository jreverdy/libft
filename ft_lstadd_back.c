/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:32:28 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/09 11:32:29 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temporary;

	if (!new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	temporary = ft_lstlast(*alst);
	temporary->next = new;
}
