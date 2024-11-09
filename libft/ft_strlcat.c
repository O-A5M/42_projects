/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:02:29 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/11/07 15:02:34 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t sz)
{
	size_t	i;
	size_t	j;
	size_t	h;

	i = 0;
	j = ft_strlen(dst);
	h = j;
	if (sz < j)
		h = sz;
	while (j < sz - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (ft_strlen(src) + h);
}
