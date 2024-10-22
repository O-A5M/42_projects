int	ft_intlen(int n)
{
	int		ret;
	long int	nb;

	ret = 0;
	nb = n;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		ret++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		ret++;
	}
	return (ret);
}
