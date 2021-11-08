#include "libft.h"

 static long ft_checker(long result, long neg)
{
	if (result > 2147483648 || result < -2147483649)
	{
		if (neg == 1 > 0)
			return (-1);
		else
			return (0);
	}
	return (result * neg);
}

int	ft_atoi(const char *str)
{
	long 	i;
	long 	nb;
	long	neg;

	i = 0;
	neg = 1;
	nb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (ft_checker(nb, neg));
}
