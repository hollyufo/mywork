#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return s1[i] - s2[i];
}

int main()
{
	char test2[] = "this is a test";
	char test1[] = "this is a test";
	int diff = ft_strcmp(test2, test1);
	printf("the diff is : %i", diff);
}