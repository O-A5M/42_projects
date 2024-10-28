/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:30:02 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/10/26 16:12:01 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	int				i;

	s = (unsigned char *)src + len;
	d = (unsigned char *)dst + len;
	i = len;
	while (i >= 0)
	{
		*d = *s;
		i--;
		d--;
		s--;
	}
	return (dst);
}
