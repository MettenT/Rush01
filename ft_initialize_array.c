/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 10:13:15 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/19 10:13:16 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_initialize_array(int *nbr[])
{
	int	row;
	int	column;

	row = 0;
	column = 0;
	while (row < 4) // 0, 1, 2, 3
	{
		while (column < 4) // 0, 1, 2, 3
		{
			nbr[row][column] = 0;
			column++;
		}	
		column = 0;
		row++;
	}
}
