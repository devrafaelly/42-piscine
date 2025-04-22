/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:44:59 by rafaoliv          #+#    #+#             */
/*   Updated: 2025/04/21 18:59:50 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

/*
int	main()
{
	int a = 5;
	int b = 2;
	
	ft_ultimate_div_mod(&a, &b);
	printf("divisão = %d\nmoda = %d\n", a, b);
}
*/