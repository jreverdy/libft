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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trimmed
	int		start;
	int		len;

	start = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	len = ft_strlen(s1);
	if (start == len)
	{

	}
}

//typedef	struct	s_var
//{
//	int	i;
//	int	j;
//	int	len;
//}t_var;
//
//int	is_charset(char *str, char *charset)
//{
//	int	i;
//
//	i = 0;
//	while (str[i] && str[i] == charset[i])
//		i++;
//	if (charset[i] == '\0')
//		return (i);
//	return (0);
//}
//
//int	count_word(char *str, char *charset)
//{
//	int	count;
//	int	len;
//
//	count = 0;
//	len = 0;
//	while (charset[len])
//		len++;
//	while (is_charset(str, charset) > 0)
//		str += len;
//	while (*str)
//	{
//		if (is_charset(str, charset) > 0)
//		{
//			while (is_charset(str, charset) > 0)
//				str += is_charset(str, charset);
//			if (*str != '\0')
//				count++;
//		}
//		else
//			str++;
//	}
//	return (count + 1);
//}
//
//int	set_len(char *str, char *charset)
//{
//	int	i;
//	int	len;
//
//	i = 0;
//	len = 0;
//	while ([len])
//		len++;
//	while (is_charset(str, charset) > 0)
//		str += len;
//	while (str[i] && is_charset(str + i, charset) == 0)
//		i++;
//	return (i);
//}
//
//char	*skip_first_charset(char *str, char *charset)
//{
//	int	len;
//
//	len = 0;
//	while (charset[len])
//		len++;
//	while (is_charset(str, charset) > 0)
//		str += len;
//	return (str);
//}
//
//char *ft_strtrim(char const *s1, char const *set)
//{
//	char	*strtrimmed;
//	size_t  i;
//	size_t  len;
//	size_t	len_of_set;
//	if (!s1 || !set)
//		return (NULL);
//	while (set[len_of_set])
//		len_of_set++;
//	len = ft_strlen(s1) - ((len_of_set * number_of_set(s1, set)) + 1);
//	strtrimmed = malloc(sizeof(char *) * len);
//	if (!strtrimmed)
//		return (NULL);
//	strtrimmed = skip_first_charset(s1, set);
//	while (*s1)
//	{
//
//	}
//

}


//int is_set (char c, char const *set)
//{
//	size_t	i;
//
//	i = 0;
//	while (set[i])
//	{
//		if (c == set[i])
//			return (1);
//		i++;
//	}
//	return (0);
//}
//
//int numbers_of_set(char const *s1, char const *set)
//{
//	size_t  i;
//	size_t  count;
//
//	i = 0;
//	count = 0;
//	while (s1[i])
//	{
//		if (s[i])
//	}
//}
//
//char *ft_strtrim(char const *s1, char const *set)
//{
//	char	*strtrimmed;
//	size_t  i;
//	size_t  len;
//
//	len =
//	if (!s1 || !set)
//		return (NULL);
//	strtrimmed =
//}
