#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char 	*buff;
	int			i;
	char		*ret;

	i = 0;
	while (i == 0)
	{
		get_that_line(buff, BUFFER_SIZE, fd);
		if (ft_strchr(buff, '\n'))
			i = 1;
	}
	ret = malloc(ft_linelen(buff) + 1);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, buff, ft_linelen(buff) + 1);
	return (ret);
}
