/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 07:34:17 by rafaoliv          #+#    #+#             */
/*   Updated: 2025/05/01 07:54:18 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char *file_name;
	
	(void)argc;
	file_name = argv[0];
	i = 0;
	while(file_name[i])
	{
		write(1, &file_name[i], 1);
		i++;
	}
	return (0);
}