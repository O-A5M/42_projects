t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;
	t_list	*new;

	ret = (t_list *) malloc(sizeof(t_list));
	if (!ret)
		return (NULL);
	while (lst)
	{
		tmp = lst -> content;
		f(tmp);
		new = ft_lstnew(tmp);
		if (!new)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, new);
		lst = lst -> next;
	}
	return (ret);
}
