/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:36:30 by rafaoliv          #+#    #+#             */
/*   Updated: 2025/05/05 18:50:32 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_negnbr(int nbr)
{
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	return (nbr);
}

int	ft_base_length(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_base_validation(char *base)
{
	int	i;
	int	j;
	int	baselength;

	baselength = ft_base_length(base);
	i = 0;
	if (baselength <= 1)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{	
	int	baselength;

	baselength = ft_base_length(base);
	if (ft_base_validation(base) == 0)
		return ;
	if (nbr < 0)
		nbr = ft_negnbr(nbr);
	if (nbr > 0)
	{		
		ft_putnbr_base(nbr / baselength, base);
		write(1, &base[nbr % baselength], 1);
	}
}

// int	main()
// {
// 	int	nbr;
// 	char	*base;

// 	nbr = -438;
// 	base = "01";
// 	ft_putnbr_base(nbr, base);
// }
