/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 10:57:04 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/18 10:57:13 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_h/main.h"

void	ft_print_params(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}	
		ft_putchar('\n');
		i++;
	}
}
