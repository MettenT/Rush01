/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:46:44 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/18 17:46:46 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_print_array(int *nbr[])
{
	int	row;
	int	column;

	row = 0;
	column = 0;
	while (row < 4)
	{
		while (column < 4)
		{
			ft_putchar(nbr[row][column] + 48); // '0'   transforming int into char
			if (column != 3)
			{
				ft_putchar(' ');
			}
			column++;
		}
		ft_putchar('\n');
		column = 0;
		row++;
	}
}
