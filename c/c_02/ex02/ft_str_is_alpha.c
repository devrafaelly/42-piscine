#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			str++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	int	resultado;

	resultado = ft_str_is_alpha("slghsl5753 jfbhoew");
	printf("%i", resultado);
}