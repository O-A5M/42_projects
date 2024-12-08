/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:13:32 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/12/08 13:44:56 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int n, int fd)
{
	unsigned int	nb;
	int				ret;

	nb = n;
	ret = 0;
	if (nb < 0)
	{
		nb = -nb;
		ret += ft_putchar_fd('-', fd);
	}
	if (nb > 9)
	{
		ret += ft_putuns(nb / 10, fd);
		ret += ft_putuns(nb % 10, fd);
	}
	else
		ret += ft_putchar_fd(nb + '0', fd);
	return (ret);
}
