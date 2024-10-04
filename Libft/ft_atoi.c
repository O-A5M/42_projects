int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	ret;

	i = 0;
	sign = 1;
	ret = 0;
	while (nptr[i])
	{
		while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		{
			i++;
		}
		if (nptr[i] == '+' || nptr[i] == '-')
		{
			if (nptr[i] == '-')
				sign = -sign;
			i++;
		}
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
			ret = (ret * 10) + (nptr[i] - '0');
			i++;
		}
		return (ret * sign);
	}
	return (0);
}
