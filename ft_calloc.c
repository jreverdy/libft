/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:31:42 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/09 11:31:44 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*allocated_memory;
	size_t	totalsize;

	totalsize = elementCount * elementSize;
	allocated_memory = malloc(totalsize);
	if (!allocated_memory)
		return (NULL);
	ft_bzero(allocated_memory, totalsize);
	return (allocated_memory);
}
