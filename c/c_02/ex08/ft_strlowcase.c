/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:15:39 by rafaoliv          #+#    #+#             */
/*   Updated: 2025/04/25 19:25:16 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = (str[i] + 32);
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "M!NUSCuLO";
	ft_strlowcase(str);
	printf("%s", str);
}
*/
