void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	num;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	ft_putchar((num % 10) + '0');
}
