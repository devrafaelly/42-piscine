/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:59:55 by rafaoliv          #+#    #+#             */
/*   Updated: 2025/04/30 20:29:29 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>
//  #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{	
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
int	main()
{
	char s1[] = "erro";
	char s2[] = "erro";
	int resultado;
	int resultado_o;
	resultado_o = strcmp(s1, s2);
	resultado = ft_strcmp(s1, s2);		
	printf("%i\n", resultado);
	printf("%i", resultado_o);
}
*/
/*
quando os parâmetros foram iguais o retorno será 0
caso o primeiro parametro seja MAIOR do que o segundo,
	retornará um numero positivo
caso o primeiro seja MENOR que o segundo, retornará um numero negativo
*/
