#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ret;

	i = ft_strlen(s);
	ret =(char *) malloc(sizeof(char) * i);
	if (ret == NULL)
		return (NULL);
	ft_strcpy(ret, s);
	return (ret);
}
