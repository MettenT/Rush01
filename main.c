/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:34:41 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/18 09:34:43 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char *argv[])
{		
	char	*input;
	int		**result;	

	if (ft_invalid(argc, argv) == 1)
	{
		input = ft_remove_white_spaces(argv[1]);
		result = ft_create_matrix(); 
		ft_initialize_array(result); // result[4][4]
		ft_print_array(result);
		// result = malloc(sizeof(int) * 100);
		// result has 20 int as an example
		// free(result);  frees the memory not used by malloc in this case 80 int spaces

	}
	else
		return (0);
}
