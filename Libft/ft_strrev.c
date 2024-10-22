#include "libft.h"

void	ft_strrev(char *s)
{
	int	i;
	int	j;
	char	temp;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j - i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
	}
}
