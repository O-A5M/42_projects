#include "get_next_line.h"

int	fill_line(int fd, char	*buff, char **ret)
{
	int	how_much;
	
	how_much = 1;
	while(how_much > 0)
	{
		how_much = read(fd, buff, BUFFER_SIZE);
		if (how_much == -1)
		{
			free(*ret);
			*ret = NULL;
			break ;
		}
		else if (how_much == 0)
			break ;
		buff[how_much] = '\0';
		if (!*ret)
			*ret = ft_strdup("");
		*ret = ft_strjoin(*ret, buff);
		if (ft_strchr(*ret, '\n'))
			break ;
	}
}

void	free_the_slave(char *ret, char **left_l)
{
	int	i;

	i = 0;
	while (ret[i] && ret[i] != '\n')
		i++;
	if (ret[i] == '\0')
	{
		free(*left_l);
		*left_l = NULL;
	}
}

size_t	the_line(char *ret, char **left_l)
{
	size_t	count;

	count = 0;
	while (ret[count] != '\0' && ret[count] != '\n')
		count++;
	if (ret[count] == '\0')
        	return (count);
	*left_l = ft_substr(ret, count + 1, ft_strlen(ret) - count);
	return (count);
}

char	*get_next_line(int fd)
{
	static char	*left_l;
	char		*buff;
	char		*ret;

	buff = malloc(BUFFER_SIZE + 1);
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(buff);
		buff = NULL;
		free(left_l);
		left_l = NULL;
		return(NULL);
	}
	if (!buff)
		return (NULL);
	ret = ft_strdup(left_l);
	if (!ft_strchr(ret, '\n'))
		fill_line(fd, buff, &ret);
	free(buff);
	buff = NULL;
	if (!ret)
		return (NULL);
	free_the_slave(ret, &left_l);
	ret[the_line(ret, &left_l) + 1] = '\0';
	return (ret);
}