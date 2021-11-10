/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:34:37 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/10 15:29:27 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_var
{
	int	i;
	int	j;
	int	len;
}t_var;

int	is_charset(char const *str, char charset)
{
	if (*str == charset)
		return (1);
	return (0);
}

int	count_word(char const *str, char charset)
{
	int	count;

	count = 0;
	while (is_charset(str, charset) == 1)
		str++;
	while (*str)
	{
		if (is_charset(str, charset) == 1)
		{
			while (is_charset(str, charset) == 1)
				str++;
			if (*str != '\0')
				count++;
		}
		else
			str++;
	}
	return (count + 1);
}

int	wordlen(char const*str, char charset)
{
	int	i;

	i = 0;
	while (is_charset(str, charset) == 1)
		str++;
	while (str[i] && is_charset(str + i, charset) == 0)
		i++;
	return (i);
}

char	*skip_charsets(char const *str, char charset)
{
	while (is_charset(str, charset) > 0)
		str++;
	return ((char *)str);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	t_var	var;

	if (!s)
		return (NULL);
	var.i = 0;
	tab = malloc(sizeof(*tab) * (count_word(s, c) + 1));
	if (!tab)
		return (NULL);
	s = skip_charsets(s, c);
	while (*s)
	{
		tab[var.i] = malloc(sizeof(char) * (wordlen(s, c) + 1));
		if (!(tab[var.i]))
			return (NULL);
		var.len = wordlen(s, c);
		var.j = 0;
		while (var.j < var.len)
			tab[var.i][var.j++] = *(s++);
		tab[var.i][var.j] = '\0';
		var.i++;
		s = skip_charsets(s, c);
	}
	tab[var.i] = 0;
	return (tab);
}

//int main()
//{
//	char **tab;
//	int i = 0;
//
//	tab = ft_split("bonjour\0les,loulous,comment,allez,vous,", '\0');
//	while (tab[i])
//	{
//		printf("line %d: %s\n", i, tab[i]);
//		i++;
//	}
//	return 0;
//}
