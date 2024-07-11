
#include <unistd.h>

int		max(int* tab, unsigned int len)
{
	unsigned int i = 1;
	int max = tab[0];
	if(len == 0)
	{
		return 0;
	}
	while(i < len)
	{
		if(max < tab[i])
		{
			max = tab[i];
		}
		i++;
	}
	return max;
}
