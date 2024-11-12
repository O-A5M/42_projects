#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
}

#include <stdio.h>

int	main()
{
	t_list	*first;
	t_list	*last;
	t_list	*middle;
	t_list	*laaaast;

	middle = ft_lstnew("middle");
	first = ft_lstnew("first");
	last = ft_lstnew("last");
	laaaast = ft_lstnew("the very last");
	ft_lstadd_front(&last, middle);
	ft_lstadd_front(&middle, first);
	ft_lstadd_back(&laaaast, first);
	printf("%d\n", ft_lstsize(first));
	printf("%s\n", (char *)ft_lstlast(first) -> content);
	/*
	while (first)
	{
		printf("%s\n", (char *)first -> content);
		first = first -> next;
	}
	*/
	free(first);
	free(middle);
	free(last);
	free(laaaast);
}
