/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_conditions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:08:52 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/19 12:08:54 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int ft_top_column(int *nbr[], char *input, 	int canview) // top to bottom
{
	int row = 0;
	int column = 0;
	int i = 0;
	int height = 0; // Height of the buildings
	// canview = 0; // amount of buildings you can see

	while (column < 4)
	{
		while (row < 4)
		{
			if (nbr[row][column] > height) // if building is higher than height
			{
				height = nbr[row][column]; 
				canview += 1; // canview = canview + 1;
			}
			row++;
		}
		if (input[i] == canview + 48 // '0')
		{
			column++;
			i++;
		}			
		else
			return (0);
	}
	return (1);	
}

int ft_bot_column(int *nbr[], char *input, int canview)
{
	int row = 3;
	int column = 0;
	int i = 4;
	int height = 0;

	while (column < 4)
	{
		while (row >= 0)
		{
			if (nbr[row][column] > height)
			{
				height = nbr[row][column];
				canview += 1;
			}
			row--;
		}
		if (input[i] == canview + 48)
		{
			column++;
			i++;
		}

		else
			return (0);
	}
	return (1);	
}

int ft_left_row(int *nbr[], char *input, int canview)
{
	int row = 0;
	int column = 0;
	int i = 8;
	int height = 0;

	while (row < 4)
	{
		while (column < 4)
		{
			if (nbr[row][column] > height)
			{
				height = nbr[row][column];
				canview += 1;
			}
			column++;
		}
		if (input[i] == canview + 48)
		{
			row++;
			i++;
		}

		else
			return (0);
	}
	return (1);	
}

int ft_right_row(int *nbr[], char *input, int canview)
{	
	int row = 0;
	int column = 3;
	int i = 12;
	int height = 0;

	while (row < 4)
	{
		while (column >= 0)
		{
			if (nbr[row][column] > height)
			{
				height = nbr[row][column];
				canview += 1;
			}
			column--;
		}
		if (input[i] == canview + 48)
		{
			row++;
			i++;
		}
		else
			return (0);
	}
	return (1);	
}

int ft_check_conditions(int *nbr[], char *input)
{
	if (ft_top_column(int *nbr[], char *input, 0) != 1)
		return (0);

	if (ft_bot_column(int *nbr[], char *input, 0) != 1)
		return (0);

	if (ft_left_row(int *nbr[], char *input, 0) != 1)
		return (0);

	if (ft_right_row(int *nbr[], char *input, 0) != 1)
		return (0);
}