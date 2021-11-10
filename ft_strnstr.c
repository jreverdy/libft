/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:35:34 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/09 11:35:36 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i])
	{
		if (str[i] == to_find[k] && i < len)
		{
			j = i;
			while (str[j] && to_find[k] && str[j] == to_find[k] && j < len)
			{
				j++;
				k++;
				if (to_find[k] == '\0')
					return ((char *)str + i);
			}
		}
		k = 0;
		i++;
	}
	return (0);
}

//#include <string.h>
//int main(void)
//{
//	printf("ft:%s\n", ft_strnstr("Bonjour", "njo", 4));
//	printf("ft:%s\n", strnstr("Bonjour", "njo", 4));
//	//printf("%s\n", strnstr("allo bonjour", "bon", ));
//}
