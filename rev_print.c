#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

void rev_print(char *str)
{
	int len = ft_strlen(str) - 1;
	while (len >= 0)
	{
		ft_putchar(str[len]);
		len--;
	}
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		rev_print(argv[1]);
	}
}