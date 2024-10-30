#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"
#include <limits.h>
int	main()
{
	int	a;

	a = 'A';
	// tests for ft_tolower.
	ft_putstr_fd("tests for ft_tolower\n", 1);
	while (a <= 'Z')
	{
		printf("%c --> %c\n", a, ft_tolower(a));
		a++;
	}
	// tests for ft_toupper.
	ft_putstr_fd("tests for ft_toupper\n", 1);
	a = 'a';
	while (a <= 'z')
	{
		printf("%c --> %c\n", a, ft_toupper(a));
		a++;
	}
	//tests for ft_putnbr.
	ft_putstr_fd("tests for ft_putnbr\n", 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-1337, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(1337, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(INT_MAX, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(INT_MIN, 1);
	ft_putchar_fd('\n', 1);
	// tests for ft_atoi.
	ft_putstr_fd("tests for ft_atoi\n", 1);
	printf("%d\n", ft_atoi("1337"));
	ft_putstr_fd("the output should be: 1337\n", 1);
	printf("%d\n", ft_atoi("-+42"));
	ft_putstr_fd("the output should be: 0\n", 1);
	printf("%d\n", ft_atoi(" - 16"));
	ft_putstr_fd("the output should be: 0\n", 1);
	printf("%d\n", ft_atoi("  -3"));
	ft_putstr_fd("the output should be: -3\n", 1);
	printf("%d\n", ft_atoi("13low37"));
	ft_putstr_fd("the output should be: 13\n", 1);
	// tests for ft_memset.
	printf("tests for ft_memset");
	char	*str;

	str = (char *) malloc(sizeof(char) * 7);
	ft_putstr_fd(ft_memset((char *)str, 65, 6), 1);
	free(str);
}
