/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:41:53 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/10/25 14:46:01 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_intlen(int n)
{
	int			ret;
	long int	nb;

	ret = 0;
	nb = n;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		ret++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		ret++;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	char			*ret;
	int				i;
	long int		nb;

	nb = n;
	i = ft_intlen(n) - 1;
	ret = (char *) malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (ret == NULL)
		return (NULL);
	if (nb == 0)
		ret[i] = '\0';
	if (nb < 0)
	{
		ret[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		ret[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	return (ret);
}
