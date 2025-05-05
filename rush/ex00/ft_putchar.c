#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	error_message(void)
{
	write(1, "ERRO! Valor inválido. Insira números positivos.\n", 50);
}
