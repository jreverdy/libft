#include "libft.h"

void *ft_memrchr(const void *s, int c, size_t n)
{
    unsigned char   *ptr_s;
    size_t          i;
    size_t          j;

    ptr_s = (unsigned char *)s;
    i = 0;
    j = 0;
    while (ptr_s[i])
        i++;
    while (j < n)
    {
        if (ptr_s[i] == (unsigned char)c)
            return (ptr_s + i);
        i--;
        j++;
    }
    return (0);
}