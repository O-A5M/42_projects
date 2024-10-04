char	*ft_strcpy(char *restrict dst, const char *restrict src)
{
	int	i;

	i = 0;
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
