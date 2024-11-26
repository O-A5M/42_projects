void	*ft_realloc(void *ptr, size_t size)
{
	char	*ret;

	if (!ptr)
	{
		ret = malloc(size);
		if (!ret)
			return (NULL);
	}
	else if (ptr && size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ret = malloc(size);
		if (!ret)
			return (NULL);
		ft_strlcpy(ret, (char *)ptr, ft_strlen(ptr));
		free(ptr);
	}
	return (ret);
}
