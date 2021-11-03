#include "libft.h"

char *ft_strnstr(const char *s1 , const char *s2 , size_t  len )
{
    size_t i;
    size_t j;
    size_t k;

    i = 0;
    k = 0;
    if (*s1 == NULL || *s2 == NULL)
        return (0);
    if (s2[i] == '\0')
        return (s1);
    while (s1[i] && i < len)
    {
        if (s1[i] == s2[k])
        {
            j = i;
            while (s1[j] && s2[k] && s1[j] == s2[k])
            {
                j++;
                k++;
                if (s2[k] == '\0')
                    return (s1 + i);
            }
        }
        k = 0;
        i++;
    }
    return (0);
}