/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:31:48 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/11/13 13:51:40 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static int	cleaner(char **s, size_t i)
{
	size_t	index;

	index = 0;
	while (index < i - 1)
	{
		free(s[index]);
		index++;
	}
	free(s);
	return (0);
}

static int	maldup(char **s, const char *d, char c)
{
	size_t	te;
	size_t	start;
	size_t	index;

	te = 0;
	start = 0;
	index = 0;
	while (d[te])
	{
		while (d[te] == c)
			te++;
		if (!d[te])
			break ;
		start = te;
		while (d[te] && d[te] != c)
			te++;
		s[index] = ft_substr(d, start, te - start);
		if (!s[index++])
			return (cleaner(s, index));
	}
	s[index] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**arr;

	if (!s)
		return (NULL);
	count = count_word(s, c);
	arr = (char **)malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (maldup(arr, s, c) == 0)
	{
		return (NULL);
	}
	return (arr);
}
