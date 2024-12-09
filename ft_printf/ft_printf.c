/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 00:25:53 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/12/09 18:32:26 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(char* str, char c)
{
	int	i;

	i = 0;
	if (c == 's')
	{
		if (!str)
			i = ft_putstr_fd("(null)", 1);
		else
			i = ft_putstr_fd(str, 1);
	}
/*	else
	{
		if (!va_arg(str, void*))
			i = ft_putstr_fd("(nil)", 1);
		else
			i = ft_putadr(va_arg(str, unsigned long long int));
	}*/
	return (i);
}

int	print_var(va_list str, const char	*str1, int i)
{
	int	ret;

	ret = 0;
	if (str1[i] == 's')
		ret = check(va_arg(str, char*), 's');
	else if (str1[i] == 'c')
		ret = ft_putchar_fd(va_arg(str, int), 1);
	else if (str1[i] == 'd' || str1[i] == 'i')
		ret = ft_putnbr_fd(va_arg(str, int), 1);
	else if (str1[i] == 'x')
		ret = ft_putnbr_base(va_arg(str, int), "0123456789abcdef");
	else if (str1[i] == 'X')
		ret = ft_putnbr_base(va_arg(str, int), "0123456789ABCDEF");
	else if (str1[i] == 'u')
		ret = ft_putuns(va_arg(str, unsigned int), 1);
//	else if (str1[i] == 'p')
//		ret = check(str, 'p');
	else if (str1[i] == '%')
		ret = ft_putchar_fd('%', 1);
	return (ret);
}

int	ft_printf(const char *str1, ...)
{
	va_list	str;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	if (str1 == NULL)
		return (-1);
	va_start(str, str1);
	while (str1[i])
	{
		if (str1[i] != '%')
			ret += ft_putchar_fd(str1[i], 1);
		else
		{
			i++;
			ret += print_var(str, str1, i);
		}
		i++;
	}
	va_end(str);
	return (ret);
}
