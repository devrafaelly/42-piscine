#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	a;
	int	b;

	a = 24;
	b = 13;
	ft_swap(&a, &b);
	printf("a = %d\nb = %d\n", a, b);
}