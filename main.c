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
	int		i;

	if (ft_invalid(argc, argv) == 1)
	{
		ft_remove_white_spaces(argv[1]);
		input = argv[1];
		result = malloc(sizeof(int) * 16);
		i = 0;
		while (i < 16)
		{
			result[i] = malloc(sizeof(int) * 16);
			i++;
		}
		ft_initialize_array(result);
		ft_print_array(result);
	}
	else
		return (0);
}

// int **ft_create_matrix(void)
// {
// 	g_result = malloc(sizeof(int) * 16);
// 	if (!g_result)
// 	{
// 		ft_putstr("Error\n");
// 		return (0);
// 	}

// 	int i;
// 	i = 0;
//     while (i < 16)
//     {
//         g_result[i] = malloc(sizeof(int)*16);
//         i++;
//     } 
// 	ft_initialize_array(g_result);
// 	return (g_result);
// }
