#include "get_next_line.h"

char	*fill_line(int fd, char	*buff, char *left_l)
{
	int	how_much;
	char	*tmp;
	
	how_much = 1;
	while(how_much > 0)
	{
		how_much = read(fd, buff, BUFFER_SIZE);
		if (how_much == -1)
		{
			free(left_l);
			return (NULL);
		}
		else if (how_much == 0)
			break ;
		buff[how_much] = '\0';
		if (!left_l)
			left_l = ft_strdup("");
		tmp = left_l;
		left_l = ft_strjoin(tmp, buff);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(left_l, '\n'))
			break ;
	}
	return (left_l);
}

char	*the_line(char *ret)
{
	size_t	count;
	char	*left_l;

	count = 0;
	while (ret[count] != '\n' && ret[count] != '\0')
		count++;
	if (ret[count] == '\0')
        	return (NULL);
	left_l = ft_substr(ret, count + 1, ft_strlen(ret) - count);
	if (!left_l == 0)
	{
		free(left_l);
		left_l = NULL;
	}
	ret[count + 1] = '\0';
	return (left_l);
}

char	*get_next_line(int fd)
{
	static char	*left_l;
	char		*buff;
	char		*ret;

	buff = malloc(BUFFER_SIZE + 1);
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(buff);
		buff = NULL;
		free(left_l);
		left_l = NULL;
		return(NULL);
	}
	if (!buff)
		return (NULL);
	ret = fill_line(fd, buff, left_l);
	free(buff);
	buff = NULL;
	if (!ret)
		return (NULL);
	left_l = the_line(ret);
	return (ret);
}
