#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int	i;

	i = 0;
	while (src[i] != c && i < n)
	{
		dest[i] == src[i];
		i++;
	}
	if (src != c)
		return (NULL);
	return (src + i);
}
