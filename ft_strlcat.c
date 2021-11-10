/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:35:06 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/09 11:35:07 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	free_space;
	char			*ptr_dst;

	free_space = size;
	ptr_dst = dst;
	while (*ptr_dst && free_space != 0)
	{
		ptr_dst++;
		free_space--;
	}
	if (free_space == 0)
		return (ft_strlen(src) + size);
	while (*src && free_space > 1)
	{
		*ptr_dst++ = *src++;
		free_space--;
	}
	*ptr_dst = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
