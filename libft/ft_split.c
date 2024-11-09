/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:31:48 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/11/09 10:32:57 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cntwrd(const char *s, char c)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (s[i])
	{
		if (s[i] != c
			&& (s[i + 1] == c || s[i + 1] == '\0'))
			ret++;
		i++;
	}
	return (ret);
}

static char	*ft_strtrim_pro_max(char const *s, char c)
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

static int	str_allc(const char *s, char c, char **ret)
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
		while (s[i] != c && s[i] != '\0')
		{
			allc++;
			i++;
		}
		ret[a] = (char *) malloc(sizeof(char) * (allc + 1));
		if (!ret[a])
			return (0);
		i++;
		a++;
	}
	return (1);
}

static void	fill_it(const char *s, char c, char **ret)
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
		while (s[i] != c && s[i] != '\0')
		{
			ret[a][b] = s[i];
			i++;
			b++;
		}
		ret[a][b] = '\0';
		a++;
	}
	ret[a] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	char	*s1;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	s1 = ft_strtrim_pro_max(s, c);
	ret = malloc((cntwrd(s, c) + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	if (str_allc(s1, c, ret) == 0)
	{
		while (ret[i])
		{
			free(ret[i]);
			i++;
		}
		free(ret);
		return (NULL);
	}
	fill_it(s1, c, ret);
	free(s1);
	return (ret);
}
