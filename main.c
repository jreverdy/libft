#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <limits.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[25] = "123456789";
	unsigned int start = 3;
	size_t len = 5;
	printf("chaine avant trimmage = %s\n", str);
	printf("chaine apres trimmage = %s\n", ft_substr(str, start, len));

}