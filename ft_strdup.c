#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

char    *ft_strdup(char *src)
{
	int len;
	char *dub;

	len = ft_strlen(src);

	dub = (char *)malloc(len  * sizeof(char));

	if (dub == NULL)
	{
		return NULL;
	}

	dub = ft_strcpy(dub, src);

	return dub;
}


int main()
{
    char source[] = "Hello, World!";
    char *duplicate;

    duplicate = ft_strdup(source);

    if (duplicate == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Original : %s\n", source);
    printf("Duplicate: %s\n", duplicate);
    free(duplicate);

    return 0;
}