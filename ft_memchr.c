#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *ptr_s;
    size_t          i;

    ptr_s = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (ptr_s[i] == (unsigned char)c)
            return (ptr_s + i);
        i++;
    }
    return (0);
}
