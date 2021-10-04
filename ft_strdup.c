#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t  len;
    char *str;

    len = ft_strlen(s) + 1;
    if (s == NULL)
        return (NULL);
    str = malloc(sizeof(char) * len);
    if (str == NULL)
        return (NULL);
    ft_strlcpy(str, s, len);
    return (str);
}