/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_double.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:15:17 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/19 14:15:19 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// int ft_check_double_row(int *nbr[])
// {
// 	int	row;
// 	int	column;

// 	row = 0;
// 	column = 0;
// 	while (row < 4)
// 	{
// 		if (nbr[row][column] != nbr[row][column + 1] 
// 			&& nbr[row][column] != nbr[row][column + 2] 
// 			&& nbr[row][column] != nbr[row][column + 3] 
// 			&& nbr[row][column + 1] != nbr[row][column + 2]
// 			&& nbr[row][column + 1] != nbr[row][column + 3] 
// 			&& nbr[row][column + 2] != nbr[row][column + 3])
// 			{
// 				row++;
// 			}
// 		else
// 		{
// 			return (0);
// 		}
// 	}
// 	return (1);
// }

// int ft_check_double_column(int *nbr[])
// {
// 	int	row;
// 	int	column;

// 	row = 0;
// 	column = 0;
// 	while (column < 4)
// 	{
// 		if (nbr[row][column] != nbr[row + 1][column] 
// 			&& nbr[row][column] != nbr[row + 2][column] 
// 			&& nbr[row][column] != nbr[row + 3][column]
// 			&& nbr[row + 1][column] != nbr[row + 2][column]
// 			&& nbr[row + 1][column] != nbr[row + 3][column] 
// 			&& nbr[row + 2][column] != nbr[row + 3][column])
// 			{
// 				column++;
// 			}
// 		else
// 		{
// 			return (0);
// 		}
// 	}
// 	return (1);
// }

// int	ft_check_double(int *nbr[])
// {
// 	if (ft_check_double_row != 1)
// 		return (0);
// 	if (ft_check_double_column != 1)
// 		return (0);
// }
