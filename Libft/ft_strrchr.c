#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return (s + i);
		i--;
	}
	return (NULL);
}
