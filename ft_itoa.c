#include "libft.h"

char	*ft_fill_str(char *str, int nb, int size)
{
	long int	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= - 1;
	}
	while (nbr)
	{
		str[size - 1] = (nbr % 10) + 48;
		nbr = nbr / 10;
		size--;
	}
	return (str);
}

int ft_count_numbers(int nb)
{
	size_t		i;
	long int	nbr;

	nbr = nb;
	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	if (n == 0)
	{
		str = ft_calloc(2, 1);
		str[0] = '0';
		return (str);
	}
	size = ft_count_numbers(n);
	str = ft_calloc((size + 1), sizeof(char));
	str = ft_fill_str(str, n, size);
	return (str);
}
//
//#include <stdio.h>
//
//int main(void)
//{
//	printf("%s\n", ft_itoa(-123456));
//	return (0);
//}