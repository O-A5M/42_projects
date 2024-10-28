/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:11:45 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/10/25 10:37:01 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	ft_strcat(char *ret, char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ret[i + j] = s2[j];
		j++;
	}
	ret[j + i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		len;

	len = (ft_strlen(s1) + ft_strlen(s2));
	ret = (char *) malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	ft_strcat(ret, s1, s2);
	return (ret);
}
