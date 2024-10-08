#include <stddef.h>

char	*ft_strstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while ((needle[j] == haystack[i + j]) && needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%s\n", ft_strstr("mariana steel", "z"));
	printf("%s\n", strstr("mariana steel", "z"));
}*/
