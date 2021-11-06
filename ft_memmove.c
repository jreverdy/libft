#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;

	ptr_dest = (char *) dest;
	ptr_src = (char *) src;
	i = 0;
	if (dest > src)
	{
		while (n--)
			ptr_dest[n] = ptr_src[n];
	}
	else if (dest < src)
	{
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (dest);
}
