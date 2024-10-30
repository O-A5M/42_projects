#include "libft.h"

int	main()
{
	char	a;
	char	b;
	int	i;

	a = 'a';
	i = 0;
	ft_putstr_fd("<-- test for ft_toupper -->", 1);
	while (a <= 'z')
	{
		b = ft_toupper(a);
		ft_putchar_fd(a, 1);
		ft_putstr_fd(" --> ", 1);
		ft_putchar_fd(b, 1);
		ft_putchar_fd('\n', 1);
		a++;
	}
	ft_putstr_fd("<-- test for ft_tolower -->");
	a = 'A';
	while (a <= 'Z')
	{
		b = ft_tolower(a);
		ft_putchar_fd(a, 1);
		ft_putstr_fd(" --> ", 1);
		ft_putchar_fd(b, 1);
		ft_putchar_fd('\n', 1);
		a++;
	
	}
	ft_putstr_fd("<-- tests for ft_isalpha -->", 1);
	a = 'A';
	while (a <= 'z')
	{
		if (a == 'Z' + 1)
			a = 'a';
		i = ft_isalpha(a);
		ft_putchar_fd(a, 1);
		ft_putstr_fd(" --> ", 1);
		ft_putnbr_fd(i, 1);
		ft_putchar_fd('\n', 1);
		a++;
	}
	ft_putstr_fd("<-- tests for ft_isdigit -->", 1);
	a = '0';
	while (a <= '9')
	{
		i = ft_isdigit(a);
		ft_putchar_fd(a, 1);
		ft_putstr_fd(" --> ", 1);
		ft_putnbr_fd(i, 1);
		ft_putchar_fd('\n', 1);
		a++;
	}
	ft_putstr_fd("<-- tests for ft_isalnum -->", 1);
	a = '0';
	while (a <= 'z')
	{
		if (a == '9' + 1)
			a = 'A';
		if (a == 'Z' + 1)
			a = 'a';
		i = ft_isalnum(a);
		ft_putchar_fd(a, 1);
		ft_putstr_fd(" --> ", 1);
		ft_putnbr_fd(i, 1);
		ft_putchar_fd('\n', 1);
		a++;
	}
	// test for ft_atoi
	ft_putstr_fd("<-- test for ft_atoi -->", 1);
	ft_putstr_fd("the result should be: ");
	ft_putnbr_fd(atoi("1337"), 1);
	ft_putstr_fd("\nthe result is: ");
	ft_putnbr_fd(ft_atoi("1337"), 1);

	ft_putstr_fd("<-- test for ft_atoi -->", 1);
	ft_putstr_fd("the result should be: ");
	ft_putnbr_fd(atoi("-1337"), 1);
	ft_putstr_fd("\nthe result is: ");
	ft_putnbr_fd(ft_atoi("-1337"), 1);

	ft_putstr_fd("<-- test for ft_atoi -->", 1);
	ft_putstr_fd("the result should be: ");
	ft_putnbr_fd(atoi("  42ls16"), 1);
	ft_putstr_fd("\nthe result is: ");
	ft_putnbr_fd(ft_atoi("  42ls16"), 1);

	ft_putstr_fd("<-- test for ft_atoi -->", 1);
	ft_putstr_fd("the result should be: ");
	ft_putnbr_fd(atoi("- 53"), 1);
	ft_putstr_fd("\nthe result is: ");
	ft_putnbr_fd(ft_atoi("- 53"), 1);

	ft_putstr_fd("<-- test for ft_atoi -->", 1);
	ft_putstr_fd("the result should be: ");
	ft_putnbr_fd(atoi("12345678901234"), 1);
	ft_putstr_fd("\nthe result is: ");
	ft_putnbr_fd(ft_atoi("12345678901234"), 1);

	ft_putstr_fd("<-- test for ft_atoi -->", 1);
	ft_putstr_fd("the result should be: ");
	ft_putnbr_fd(atoi(" \n+44"), 1);
	ft_putstr_fd("\nthe result is: ");
	ft_putnbr_fd(ft_atoi(" \n+44"), 1);
}
