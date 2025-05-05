#include <stdio.h>

int	ft_strlen(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	dest_length;
	unsigned int	src_length;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	j = 0;
	if (size <= dest_length)
		return (size + src_length);
	if (size > dest_length)
	{
		while ((dest_length + j) < (size - 1) && src[j])
		{
			dest[dest_length + j] = src[j];
			j++;
		}
		dest[dest_length + j] = '\0';
	}
	return (dest_length + src_length);
}

int	main(void)
{
	char	src[] = "sonolento";
	char	dest[6] = "gato";
	ft_strlen(dest);
	ft_strlcat(dest, src, 7);
	printf("%i\n", ft_strlcat(dest, src, 7));
	printf("%s", dest);
}
