#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*track;
	int	ret;

	ret = 0;
	track = lst;
	while (track)
	{
		ret++;
		track = track -> next;
	}
	return (ret);
}
