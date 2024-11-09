/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:56:09 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/11/07 14:56:13 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmem, size_t size)
{
	unsigned char	*ret;
	size_t			i;

	i = nmem * size;
	ret = malloc(i);
	if (!ret)
		return (NULL);
	ft_bzero(ret, i);
	return (ret);
}
