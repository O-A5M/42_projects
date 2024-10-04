#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c = c - 32;
	return (c);
}
