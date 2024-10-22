#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	i = 0;
	ret =(char *) malloc(sizeof(char) * len + 1);
	if (ret == NULL)
		return (NULL);
	while (i < len)
	{
		ret[i] = s[i + start];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
