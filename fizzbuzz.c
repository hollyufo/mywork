#include <unistd.h>

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

int	main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz\n", 9);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz\n", 5);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz\n", 5);
		}
		else
		{
			ft_putnbr(i);
			ft_putchar('\n');
		}
		i++;
	}
}