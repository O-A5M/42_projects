/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:32:49 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/12/09 18:48:40 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"
#include <stdio.h>

int	base_len(char *base)
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

int	ft_putnbr_base(int lnbr, char *base)
{
	int			lbase;
	int			ret;

	ret = 0;
	lbase = base_len(base);
	if (lbase < 2)
		return (0);
	if (lnbr < 0)
	{
		ret += ft_putchar_fd('-', 1);
		lnbr = -lnbr;
	}
	if (lnbr >= lbase)
		ret += ft_putnbr_base(lnbr / lbase, base);
	ret += ft_putchar_fd(base[lnbr % lbase], 1);
	return (ret);
}
