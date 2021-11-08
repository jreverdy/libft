#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	len_of_s;
	char	*sub_str;

	j = 0;
	len_of_s = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= len_of_s)
		return (ft_calloc(1, sizeof(char)));
	if (ft_strlen(&s[start]) < len)
		return (ft_strdup(&s[start]));
	sub_str = ft_calloc(len + 1, sizeof(char));
	if (!sub_str)
		return (NULL);
	while (j < len)
	{
		sub_str[j] = s[start];
		j++;
		start++;
	}
	return (sub_str);
}

//
//#include <stdio.h>
//
//int main()
//{
//	char* str;
//
//	str = ft_substr("Hello, 42lyon!", 0, 1);
//	printf("%s\n", str);
//
//	return 0;
//}