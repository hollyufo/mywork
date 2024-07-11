#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int get_index(char c)
{
	char y = 'a';
	char x = 'A';
	int i = 1;
	while (c != y && c != x)
	{
		y++;
		x++;
		i++;
	}
	return i;
}
void repeat_alpha(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			int j;
			int e = 1;
			j = get_index(str[i]);
			while (e <= j)
			{
				ft_putchar(str[i]);
				e++;
			}
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
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
		repeat_alpha(argv[1]);
	}
}