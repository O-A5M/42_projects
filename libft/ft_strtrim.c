/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:22:53 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/11/11 18:08:42 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*ret;
	unsigned int	start;
	unsigned int	end;
	size_t			len;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
	{
		ret = malloc(sizeof('\0'));
		if (!ret)
			return (NULL);
		ret[0] = '\0';
		return (ret);
	}
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	len = end - start + 1;
	ret = ft_substr(s1, start, len);
	return (ret);
}
