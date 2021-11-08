#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
//	size_t	i;
//	size_t	j;
//	size_t	k;
//
//	i = -1;
//	k = 0;
//	if (!s2)
//		return ((char *)s1);
//	while (s1[++i] && i < len)
//	{
//		if (s1[i] == s2[k])
//		{
//			j = i - 1;
//			while (s1[++j] && s2[k] && s1[j] == s2[k])
//			{
//				k++;
//				if (s2[k] == '\0')
//					return ((char *)(s1 + i));
//			}
//		}
//		k = -1;
//	}
//	return (0);

	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	if (!s2)
		return ((char *)s1);
	while (s1[i])
	{
		if (s1[i] == s2[k])
		{
			j = i;
			while (s1[j] && s2[k] && s1[j] == s2[k] && k < len)
			{
				k++;
				j++;
				if (s2[k] == '\0')
					return ((char *)(s1 + i));
			}
			k = 0;
		}
		i++;
	}
	return (0);
}

//#include <string.h>
//int main(void)
//{
//	printf("ft:%s\n", ft_strnstr("allo bonjour", "bonjour", 7));
//	printf("%s\n", strnstr("allo bonjour", "bonjour", 7));
//}