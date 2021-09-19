/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:05:59 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/19 17:06:00 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	**ft_create_matrix(void)
{
	int		i;
	int		**result;

	result = malloc(sizeof(int) * 16);
	if (!result)
	{
		ft_putstr("Error\n");
		return (0);
	}
	i = 0;
	while (i < 16)
	{
		result[i] = malloc(sizeof(int) * 16);
		i++;
	}
	return (result);
}
