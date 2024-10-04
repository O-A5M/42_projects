int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1024);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main()
{
	int	i;

	i = 'A';
	while (i <= 'Z' + 1)
	{
		printf("%d\n", isalpha(i));
		printf("%dhh\n", ft_isalpha(i));
		i++;
	}
}*/
