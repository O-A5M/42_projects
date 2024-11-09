/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:35:00 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/11/09 10:35:19 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	the_len(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	ret;

	i = ft_strlen(s1) - 1;
	j = ft_strlen(set) - 1;
	ret = i;
	if (ft_strncmp(s1, set, j) == 0)
		ret = ret - ft_strlen(set);
	while (j >= 0 && s1[i] == set[j])
	{
		i--;
		j--;
	}
	if (j < 0)
		ret = ret - ft_strlen(set);
	return (ret);
}

static char	*fill_it(char const *s1, char const *set, size_t len)
{
	unsigned int	start;
	char			*ret;

	start = 0;
	if (ft_strncmp(s1, set, ft_strlen(set) - 1) == 0)
		start = ft_strlen(set);
	ret = ft_substr(s1, start, len);
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*ret;
	size_t		len;

	if (!s1 || !set)
		return (NULL);
	len = the_len(s1, set) + 1;
	ret = fill_it(s1, set, len);
	return (ret);
}
