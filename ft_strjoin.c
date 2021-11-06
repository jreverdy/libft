#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined_str = malloc(sizeof(char *) * len);
	if (!joined_str)
		return (NULL);
	ft_strlcpy(joined_str, s1, len);
	ft_strlcat(joined_str, s2, len);
	return (joined_str);
}

//#include <stdio.h>
//
//int main()
//{
//	char str[10] = "bisous";
//	char str2[12] = "les loulous";
//	char *joined_str;
//	printf("chaine avant ft_strjoin = %s & %s\n", str, str2);
//	joined_str = ft_strjoin(str, str2);
//	printf("chaine apres ft_strjoin = %s\n", joined_str);
//}
