#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char		*ret;
	int		i;
	long int		nb;

	nb = n;
	i = ft_intlen(n) - 1;
	ret = (char *) malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (ret == NULL)
		return (NULL);
	if (nb == 0)
		ret[i] = '0';
	if (nb < 0)
	{
		ret[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		ret[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	return (ret);
}
/*
#include <stdio.h>

int	main()
{
	printf("%s\n", ft_itoa(0));
}*/
