/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdone.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:37:50 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/10 11:37:52 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
		return ;
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
}

//#include <stdio.h>
//
//void clear(void *content)
//{
//	(void)content;
//}
//
//int	main(void)
//{
//	t_list *liste;
//	t_list *temp;
//
//	liste = ft_calloc(10, sizeof(t_list));
//	temp = liste;
//	ft_lstadd_back(&liste, ft_lstnew("str"));
//	ft_lstadd_back(&liste, ft_lstnew("abc"));
//	ft_lstadd_back(&liste, ft_lstnew("oui"));
//	while (liste)
//	{
//		printf("%s\n", (char *)liste->content);
//		if (liste->content && !ft_strncmp("abc", liste->content, 3))
//		{
//			printf("?\n");
//			ft_lstdelone(liste, clear);
//			break ;
//		}
//		liste = liste->next;
//	}
//	printf("done\n");
//	while (temp)
//	{
//		printf("%s\n", (char *)temp->content);
//		temp = temp->next;
//	}
//}