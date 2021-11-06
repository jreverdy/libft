#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_bis;
	unsigned char	*s2_bis;
	size_t			i;

	s1_bis = (unsigned char *)s1;
	s2_bis = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_bis[i] != s2_bis[i])
			return (s1_bis - s2_bis);
		i++;
	}
	return (0);
}
