#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_bis;
	unsigned char	*s2_bis;

	s1_bis = (unsigned char *)s1;
	s2_bis = (unsigned char *)s2;
	while (n--)
	{
		if (*s1_bis != *s2_bis)
			return ((int)(*s1_bis - *s2_bis));
		s1_bis++;
		s2_bis++;
	}
	return (0);
}
