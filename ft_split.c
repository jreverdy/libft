#include "libft.h"

typedef struct s_var
{
	int	i;
	int	j;
	int	len;
}t_var;

int	is_charset(char const *str, char charset)
{
	while (charset)
	{
		if (*str == charset)
			return (1);
	}
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
	char const	**tab;
	t_var		var;

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
	return ((char *)tab);
}
