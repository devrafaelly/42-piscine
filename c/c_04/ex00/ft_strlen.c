/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 23:26:01 by rafaoliv          #+#    #+#             */
/*   Updated: 2025/05/05 18:46:02 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}
/*
int	main()
{
	int	result;
	char	str[] = "nossa piscina = novos cadetes";
	result = ft_strlen(str);
	printf("%i", result);
}
*/
