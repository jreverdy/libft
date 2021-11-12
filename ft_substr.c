/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:35:53 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/09 11:35:55 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//
//char	*ft_substr(char const *s, unsigned int start, size_t len)
//{
//	char			*sub_str;
//	unsigned int	i;
//
//	if (!s)
//		return (NULL);
//	if (ft_strlen((char *)s) <= start)
//		return (ft_calloc(1, sizeof(char)));
//	if (ft_strlen(s) < len)
//		sub_str = ft_strdup(&s[start]);
//	else
//	{
//		sub_str = ft_calloc(len + 1, sizeof(char));
//		if (!sub_str)
//			return (NULL);
//		i = 0;
//		while (i < len)
//		{
//			sub_str[i] = s[start];
//			start++;
//			i++;
//		}
//	}
//	return (sub_str);
//}

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	len_of_s;
	char	*sub_str;

	j = 0;
	len_of_s = ft_strlen((char *)s);
	if (!s)
		return (NULL);
	if (start >= len_of_s)
		return (ft_calloc(1, sizeof(char)));
	if (len > len_of_s)
		return (ft_strdup(&s[start]));

	else
	{
		sub_str = ft_calloc(len + 1, sizeof(char));
		if (!sub_str)
			return (NULL);
		while (j < len)
		{
			sub_str[j] = s[start];
			j++;
			start++;
		}
	}
	return (sub_str);
}

//
//#include <stdio.h>
//
//int main()
//{
//	char* str;
//
//	str = ft_substr("Hello, 42lyon!", 0, 1);
//	printf("%s\n", str);
//
//	return 0;
//}
