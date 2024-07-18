#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_intervalt(char *str)
{
	int i = 1;
	ft_putchar(str[0]);
	while(str[i] != '\0')
	{
		if(i % 15 == 0)
		{
			ft_putchar('3');
		}
		else if(i % 5 == 0)
		{
			ft_putchar('3');
		}
		else if (i % 3 == 0)
		{
			ft_putchar('5');
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		print_intervalt(argv[1]);
	}
	ft_putchar('\n');
}