#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i = 65;
    int j = 65;
    printf("%d\n", ft_tolower(i));
    printf("%d\n", tolower(j));
}

/*int main()
{
    char *str1 = "bon\0jour";
    char *str2 = "bon\0dour";
    size_t i = 8;
    printf(" ft_strncmp = %d\n", ft_strncmp(str1, str2, i));
    printf(" strncmp = %d\n", strncmp(str1, str2, i));
    return 0;
}*/