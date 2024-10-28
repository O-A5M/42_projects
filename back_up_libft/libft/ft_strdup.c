/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:37:48 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/10/26 16:15:12 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_strcpy(char *dst, const char	*s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ret;

	i = ft_strlen(s);
	ret = (char *) malloc(sizeof(char) * i);
	if (ret == NULL)
		return (NULL);
	ft_strcpy(ret, s);
	return (ret);
}
