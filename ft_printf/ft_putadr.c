/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:39:05 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/12/09 21:27:14 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	base_len(char *base)
{
	int	n;
	int	m;

	n = 0;
	while (base[n])
	{
		if (base[n] == '-' || base[n] == '+')
			return (0);
		m = n + 1;
		while (base[m])
		{
			if (base[n] == base[m])
				return (0);
			m++;
		}
		n++;
	}
	return (n);
}

unsigned int	ft_putnbr_base_long(long long unsigned int lnbr, char *base)
{
	size_t		lbase;
	int			ret;

	ret = 0;
	lbase = base_len(base);
	if (lbase < 2)
		return (0);
	if (lnbr >= lbase)
		ret += ft_putnbr_base(lnbr / lbase, base);
	ret += ft_putchar_fd(base[lnbr % lbase], 1);
	return (ret);
}

int	ft_putadr(long long unsigned int nb)
{
	int	i;

	i = ft_putstr_fd("0x", 1);
	i += ft_putnbr_base_long(nb, "0123456789abcdef");
	return (i);
}
