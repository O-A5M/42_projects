#include <stdlib.h>
#include <stddef.h>

void	ft_memdel(void **ap)
{
	free(ap);
	*ap = NULL;
}
