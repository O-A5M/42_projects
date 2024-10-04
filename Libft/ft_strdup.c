#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	char	ret;

	i = ft_strlen(s);
	ret = malloc(sizeof(char) * i);
	ft_strcpy(ret, s);
	return (ret);
}
