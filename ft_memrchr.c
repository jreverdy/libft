/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:33:41 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/09 11:33:42 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	size_t			i;
	size_t			j;

	ptr_s = (unsigned char *)s;
	i = 0;
	j = 0;
	while (ptr_s[i])
		i++;
	while (j < n)
	{
		if (ptr_s[i] == (unsigned char)c)
			return (ptr_s + i);
		i--;
		j++;
	}
	return (0);
}
