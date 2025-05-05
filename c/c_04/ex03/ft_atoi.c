/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 03:46:43 by rafaoliv          #+#    #+#             */
/*   Updated: 2025/05/05 18:43:26 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	signal;
	int	result;

	signal = 1;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			signal *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * signal);
}

// int	main()
// {
// 	int	number;
// 	char	str[] = " 	\n 	---+--+1234ab567";  // objetivo: -1234
// 	number = ft_atoi(str);
// 	printf("%i", number);
// 	return (0);
// }