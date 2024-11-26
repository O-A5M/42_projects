void	get_that_line(static char *buff, size_t len, int fd)
{
	int	i;

	if (!buff)
		i = 0;
	else
		i = ft_strlen(buff);
	buff = ft_realloc(len + i);
	if (!buff)
		return ;
	while (i < len)
	{
		read(fd, &buff[i], 1);
		i++;
	}
}
