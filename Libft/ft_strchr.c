char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%s\n", ft_strchr("hello", '\0'));
//	printf("%s\n", strchr("hello", 'k'));
}*/
