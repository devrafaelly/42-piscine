#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

int	main(void)
{
	int a = 5;
	int b = 2;
	
	ft_ultimate_div_mod(&a, &b);
	printf("divisão = %d\nmoda = %d\n", a, b);
}
