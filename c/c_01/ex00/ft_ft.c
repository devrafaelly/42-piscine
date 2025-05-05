#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int b = 2;
	ft_ft(&b);
	printf("%d\n", b);
}
