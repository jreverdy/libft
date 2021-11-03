#include "libft.h"

void *ft_memset (void *s, int c, size_t n)
{
    unsigned char   *ptr_s;
    unsigned int    i;

    ptr_s = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr_s[i] = (unsigned char)c;
        i++;
    }
    return (s);
}