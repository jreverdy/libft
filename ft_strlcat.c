#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    unsigned int	free_space;
    char			*ptr_dst;

    if (src == NULL || dst == NULL)
        return (0);
    free_space = size;
    ptr_dst = dst;
    while (*ptr_dst && free_space != 0)
    {
        ptr_dst++;
        free_space--;
    }
    if (free_space == 0)
        return (ft_strlen(src) + size);
    while (*src && free_space > 1)
    {
        *ptr_dst++ = *src++;
        free_space--;
    }
    *ptr_dst = '\0';
    return (ft_strlen(dst) + ft_strlen(src));
}