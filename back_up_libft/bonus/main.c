#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);

int	main()
{
	t_list	*first;
	t_list	*last;
	last = (t_list*) malloc(sizeof(t_list));
	first = (t_list*) malloc(sizeof(t_list));
	first = ft_lstnew("c");
	ft_lstadd_front(&first, ft_lstnew("b"));
	ft_lstadd_front(&first, ft_lstnew("a"));
	last = first;
	while (last != NULL)
	{
		printf("%s\n", last -> content);
		last = last -> next;
	}
	printf("%d\n", ft_lstsize(first));
	printf("%s\n", ft_lstlast(first) -> content);
}
