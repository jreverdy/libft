#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_bis;
	unsigned char	*s2_bis;

	s1_bis = (unsigned char *)s1;
	s2_bis = (unsigned char *)s2;
	i = 0;
	while ((s1_bis[i] || s2_bis[i]) && (i < n))
	{
		if (s1_bis[i] != s2_bis[i])
			return ((int)(s1_bis[i] - s2_bis[i]));
		i++;
	}
	return (0);
}
