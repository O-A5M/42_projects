#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t sz)
{
	unsigned int	n;
	unsigned int	m;
	int				i;

	n = 0;
	i = 0;
	m = 0;
	while (dst[n])
		n++;
	if (sz != 0)
	{
		while (src[i] && n + i < sz - 1)
		{
			dst[n + i] = src[i];
			i++;
		}
		dst[n + i] = '\0';
	}
	while (src[m])
		m++;
	if (sz <= n)
		return (sz + m);
	else
		return (m + n);
}
