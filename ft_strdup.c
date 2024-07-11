
#include <unistd.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dub;

	len = ft_strlen(src);
	dub = (char *)malloc(len * sizeof(char));
	if (dub == NULL)
	{
		return (NULL);
	}
	dub = ft_strcpy(dub, src);
	return (dub);
}