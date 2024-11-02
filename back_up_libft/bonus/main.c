#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	f(void *content)
{
	content = "v";
}

int	main()
{
	t_list	*first;
	t_list	*last;
	t_list	*test;

	test = (t_list*) malloc(sizeof(t_list));
	last = (t_list*) malloc(sizeof(t_list));
	first = (t_list*) malloc(sizeof(t_list));
	first = ft_lstnew("c");
	ft_lstadd_front(&first, ft_lstnew("b"));
	ft_lstadd_front(&first, ft_lstnew("a"));
	test = ft_lstnew("d");
	ft_lstadd_back(&first, test);
	ft_lstiter(first, f);
	last = first;
	while (last != NULL)
	{
		printf("%s\n", last -> content);
		last = last -> next;
	}
	printf("%d\n", ft_lstsize(first));
	printf("%s\n", ft_lstlast(first) -> content);
}
