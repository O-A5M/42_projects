void	ft_striter(char *s, void (*f)(const char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}
