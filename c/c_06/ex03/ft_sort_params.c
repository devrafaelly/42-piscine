#include <unistd.h>

int	ft_strcmp(char *av1, char *av2)
{
	int	j;

	j = 0;
	while (av1[j] && av2[j] && (av1[j] == av2[j]))
	{
		j++;
	}
	return (av1[j] - av2[j]);
}

void	ft_swap(char **av1, char **av2)
{
	char	*c;

	c = *av1;
	*av1 = *av2;
	*av2 = c;
}

void	putstr(char *argv)
{
	while (*argv)
	{
		write(1, argv, 1);
		argv++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	argc = argc - 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap (&argv[i], &argv[i + 1]);
				i = 1;
			}
			else
				i++;
		}
		i = 1;
		while (i <= argc)
		{
			putstr(argv[i]);
			i++;
		}
	}
	return (0);
}
