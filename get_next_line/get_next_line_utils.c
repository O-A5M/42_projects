#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	a;

	i = 0;
	a = c;
	while (s[i])
	{
		if (s[i] == a)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == a)
		return ((char *)s + i);
	return (NULL);
}

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\n' && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\n';
	dst[i] = '\0';
	return (dst);
}

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n] != '\n')
	{
		n++;
	}
	return (n);
}

char	*ft_strdup(const char *s)
{
	char	*ret;
	int		i;

	i = ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * i + 1);
	if (!ret)
		return (NULL);
	while (i >= 0)
	{
		ret[i] = s[i];
		i--;
	}
	return (ret);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ld;
	size_t	ls;
	size_t	ret;
	size_t	i;

	if (!dst && size == 0)
		return (ft_strlen(src));
	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	ret = ld + ls;
	if (size <= ld)
		return (size + ls);
	i = 0;
	while (i < (size - ld - 1) && src[i])
	{
		dst[i + ld] = src[i];
		i++;
	}
	dst[i + ld] = '\0';
	return (ret);
}
