#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (i + 1 > 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
//
//#include <stdio.h>
//
//int main()
//{
//	const char str[50] = "bisous les lou42lous";
//	int c = 'b';
//	printf("%s\n", ft_strrchr(str, c));
//}