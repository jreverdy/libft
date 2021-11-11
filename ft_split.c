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

static int	count_word(char const *str, char charset)
{
	int	count;

	count = 0;
	if (!*str)
		return (0);
	while (*str == charset)
		str++;
	while (*str)
	{
		if (*str == charset)
		{
			while (*str == charset)
				str++;
			if (*str != '\0')
				count++;
		}
		else
			str++;
	}
	return (count + 1);
}

static int	wordlen(char const*str, char charset)
{
	int	i;

	i = 0;
	while (*str == charset)
		str++;
	while (str[i] && str[i] != charset)
		i++;
	return (i);
}

char	*skip_charsets(char const *str, char charset)
{
	while (*str == charset)
		str++;
	return ((char *)str);
}

static int	early_check(char const *s, char c, char ***tab)
{
	int	i;

	i = 0;
	if (!s)
	{
		*tab = NULL;
		return (1);
	}
	if (!c)
	{
		*tab = ft_calloc(2, 8);
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			*tab[0] = ft_strdup(s);
		else
			*tab[0] = NULL;
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	len;

	if (early_check(s, c, &tab))
		return (tab);
	i = 0;
	tab = ft_calloc((count_word(s, c) + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	s = skip_charsets(s, c);
	while (*s)
	{
		j = 0;
		tab[i] = ft_calloc((wordlen(s, c) + 1), sizeof(char));
		if (!(tab[i]))
			return (NULL);
		len = wordlen(s, c);
		while (j < len)
			tab[i][j++] = *(s++);
		s = skip_charsets(s, c);
		i++;
	}
	return (tab);
}

//
//int main()
//{
//	char **tab;
//	int i = 0;
//
//	!strcmp(tab[0], "tripouille");
//	return 0;
//}