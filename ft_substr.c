#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_of_s;
	char	*sub_str;

	i = 0;
	j = 0;
	len_of_s = ft_strlen(s);
	if (!s)
		return (NULL);
	sub_str = malloc(sizeof(char *) * (len) + 1);
	if (!sub_str)
		return (NULL);
	while (s[i] && i != start)
		i++;
	i -= 1;
	if (len_of_s >= start)
	{
		while (s[i] && j < len)
		{
			sub_str[j] = s[i];
			j++;
			i++;
		}
	}
	return (sub_str);
}
