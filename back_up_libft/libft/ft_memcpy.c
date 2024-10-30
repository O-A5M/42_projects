/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:50:37 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/10/23 14:45:06 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*p;
	unsigned char	*s;

	i = 0;
	p = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		*p = *s;
		p++;
		s++;
		i++;
	}
	return (dest);
}
