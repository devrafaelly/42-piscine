/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:28:50 by rafaoliv          #+#    #+#             */
/*   Updated: 2025/04/24 11:31:20 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int main(void)
{
    int resultado;
    resultado = ft_str_is_printable("\0");
    printf("%i", resultado);
}
*/
