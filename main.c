#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <limits.h>
#include <string.h>

int main() {

    char *str;

    str = malloc(sizeof(char) * 8);
    printf(" ft_strlcpy = %ld\n", ft_strlcpy(str, "bonjour", 8));
    printf("%s\n", str);
    return 0;
}