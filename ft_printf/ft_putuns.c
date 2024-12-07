/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:13:32 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/12/06 15:17:08 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_putuns(unsigned int n, int fd)
{
	unsigned int	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', fd);
	}
	if (nb > 9)
	{
		ft_putuns(nb / 10, fd);
		ft_putuns(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}