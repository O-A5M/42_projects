#include "libft.h"

char	*ft_strcat(char *restrict dst, const char *restrict src)
{
	int	i;
	int	j;

	i = ft_strlen(dst);
	j = 0;
	while (src[j])
	{
		dst[j + i] = src [j];
		j++;
	}
	dst[j + i] = '\0';
	return (dst);
}

#include <stdio.h>

int	main()
{
	char	s[14] = "shit and ";
	char	t[] = "fuck";

	printf("%s", ft_strcat(s, t));
	return 0;
}
