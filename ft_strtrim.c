/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:35:48 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/09 11:35:49 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	int	len;

	if (!str || !set)
		return (NULL);
	while (*str && ft_strchr(set, *str))
		str++;
	len = ft_strlen(str);
	if (len == 0)
		return (ft_substr(str, 0, len));
	len -= 1;
	while (&str[len] != &str[0] && ft_strchr(set, str[len]))
		len--;
	return (ft_substr(str, 0, len + 1));
}
