#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
    char    *str;
    str = "Impressão de string\n";
    ft_putstr(str);
}
/*
void ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    ft_putstr("Impressão de string");
}
*/