/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:02:29 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/11/13 16:42:59 by othman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ld;
	size_t	ls;
	size_t	ret;
	size_t	i;

	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	ret = ld + ls;
	if (size <= ld)
		return (size + ls);
	i = 0;
	while (i < (size - ld - 1) && src[i])
	{
		dst[i + ld] = src[i];
		i++;
	}
	dst[i + ld] = '\0';
	return (ret);
}
