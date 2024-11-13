/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:18:04 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/11/13 11:10:33 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	ret = NULL;
	head = ret;
	while (lst)
	{
		ret = ft_lstnew(f(lst -> content));
		if (!ret)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&head, ret);
		lst = lst -> next;
	}
	return (head);
}
