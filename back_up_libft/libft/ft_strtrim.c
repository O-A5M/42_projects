/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:38:35 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/10/25 12:13:31 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	int		sp_len;
	int		start;
	char	*ret;

	i = 0;
	sp_len = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		sp_len++;
		i++;
	}
	start = i;
	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		sp_len++;
		i--;
	}
	len = ft_strlen(s) - sp_len;
	ret = ft_substr(s, start, len);
	return (ret);
}
