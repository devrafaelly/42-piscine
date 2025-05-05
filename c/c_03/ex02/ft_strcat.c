#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int	main(void)
{
	char	*result;
	char	src[] = "preto";
	char	dest[20] = "gato ";
	result = ft_strcat(dest, src);
	printf("%s", result);
}