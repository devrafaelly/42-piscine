extern	void	ft_putchar(char c);
extern	void	error_message(void);

void	conditions(int x, int y, int coluna, int linha)
{
	if ((linha == 1 || linha == y) && (coluna == 1 || coluna == x))
		ft_putchar('o');
	else if (linha == 1 || linha == y)
		ft_putchar('-');
	else if ((linha != 1 && linha != y) && (coluna != 1 && coluna != x))
		ft_putchar(' ');
	else
		ft_putchar('|');
}

void	rush(int x, int y)
{
	int	linha;
	int	coluna;

	coluna = 1;
	linha = 1;
	if (x <= 0 || y <= 0)
		return (error_message());
	while (linha <= y)
	{
		while (coluna <= x)
		{
			conditions(x, y, coluna, linha);
			coluna++;
		}
		ft_putchar('\n');
		linha++;
		coluna = 1;
	}
}
