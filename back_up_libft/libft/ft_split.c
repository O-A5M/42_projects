/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:00:41 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/10/27 13:37:30 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strtrim_pro_max(char const *s, char c)
{
	int		i;
	int		len;
	int		sp_len;
	int		start;
	char	*ret;

	i = 0;
	sp_len = 0;
	while (s[i] == c)
	{
		sp_len++;
		i++;
	}
	start = i;
	i = ft_strlen(s) - 1;
	while (s[i] == c)
	{
		sp_len++;
		i--;
	}
	len = ft_strlen(s) - sp_len;
	ret = ft_substr(s, start, len);
	return (ret);
}

int	ft_cntwrd(const char *s, char c)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			ret++;
		i++;
	}
	return (ret);
}

void	str_allc(const char *s, char c, char **ret)
{
	int	i;
	int	a;
	int	allc;

	i = 0;
	a = 0;
	while (s[i])
	{
		allc = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			allc++;
			i++;
		}
		ret[a] = (char *) malloc(sizeof(char) * (allc + 1));
		i++;
		a++;
	}
}

void	fill_it(const char *s, char c, char **ret, int mem)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 0;
	b = 0;
	while (s[i])
	{
		b = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			ret[a][b] = s[i];
			i++;
			b++;
		}
		ret[a][b] = '\0';
		a++;
	}
	ret[mem] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		mem;
	char	**ret;
	char	*s1;

	mem = ft_cntwrd(s, c);
	s1 = ft_strtrim_pro_max(s, c);
	ret = (char **) malloc(sizeof(char *) * (mem + 1));
	if (ret == NULL)
		return (NULL);
	str_allc(s1, c, ret);
	fill_it(s1, c, ret, mem);
	free(s1);
	return (ret);
}
