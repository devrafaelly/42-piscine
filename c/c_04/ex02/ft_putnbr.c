#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 12);
	}
	if (nb != -2147483648)
	{
		if (nb < 0)
		{
			ft_putnbr(nb * -1);
			write(1, "-", 1);
		}	
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			nb = (nb % 10) + '0';
			write(1, &nb, 1);
		}
		else
		{
			nb = nb + '0';
			write(1, &nb, 1);
		}
	}
}

int	main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr(nb);
}