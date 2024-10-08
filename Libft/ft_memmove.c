void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	int	temp;

	i = 0;
	while (i < n)
	{
		temp = src[i];
		dest[i] = temp;
		i++;
	}
	return (dest);
}
