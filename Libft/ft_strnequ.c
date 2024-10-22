#include <stddef.h>

int	ft_strequ(char const *s1, char const *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
	}
	return (1);
}
