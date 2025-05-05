#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	main(void)
{
    int len;
    len = ft_strlen("contagem de caracteres");
    printf("a string possui %d caracteres\n", len);
}