/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:43:56 by rafaoliv          #+#    #+#             */
/*   Updated: 2025/04/30 18:40:13 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size -1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
void print_array(int *tab, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int	main()
{
	int tab[] = {1, 2, 3, 4, 5, 6};

	ft_rev_int_tab(tab, 6);
	print_array(tab, 6);
	return (0);
}
*/