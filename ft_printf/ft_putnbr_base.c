/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_lower.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:32:49 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/12/06 14:46:31 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(long long int lnbr, char *base)
{
	int			lbase;

	lbase = base_len(base);
	if (lbase < 2)
		return ;
	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	if (lnbr >= lbase)
		ft_putnbr_base(lnbr / lbase, base);
	ft_putchar(base[lnbr % lbase]);
}
