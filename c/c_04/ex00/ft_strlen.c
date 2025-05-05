#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

int	main(void)
{
	int	result;
	char	str[] = "nossa piscina = novos cadetes";
	result = ft_strlen(str);
	printf("%i", result);
}
