extern	void	ft_putchar(char c);
extern	void	error_message(void);

void	conditions(int x, int y, int coluna, int linha)
{
	if ((linha == 1 || linha == y) && coluna == 1)
		ft_putchar('A');
	else if ((linha == 1 || linha == y) && coluna == x)
		ft_putchar('C');
	else if ((coluna == 1 || coluna == x) || (linha == 1 || linha == y))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	linha;
	int	coluna;

	linha = 1;
	if (x <= 0 || y <= 0)
		return (error_message());
	while (linha <= y)
	{
		coluna = 1;
		while (coluna <= x)
		{
			conditions(x, y, coluna, linha);
			coluna++;
		}
		ft_putchar('\n');
		linha++;
	}
}
