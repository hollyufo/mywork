#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rot_13(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'y'))
		{
			str[i] = str[i] + 1;
			ft_putchar(str[i]);
		}
		else if(str[i] == 'z' || str[i] == 'Z')
		{
			str[i] = str[i] - 25;
			ft_putchar(str[i]);
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
	if(argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		rot_13(argv[1]);
	}
}