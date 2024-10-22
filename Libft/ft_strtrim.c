#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	i;
	int	len;
	int	sp_len;
	int	start;
	char	*ret;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		sp_len++;
		i++;
	}
	start = i;
	i = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		sp_len++;
		i--;
	}
	len = ft_strlen(s) - sp_len;
	ret = ft_strsub(s, start, len);
	return (ret);
}
