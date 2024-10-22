#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strjoi(char const *s1, char const *s2)
{
	char	*ret;
	int		len;

	len = (ft_strlen(s1) + ft_strlen(s2));
	ret = (char *) malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	ret = ft_strcat(s1, s2);
	return (ret);
}
