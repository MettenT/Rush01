/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:04:45 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/18 11:04:46 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_invalid(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i < 31)
	{
		if (argc == 2 && i % 2 == 0 && '1' <= argv[1][i] && argv[1][i] <= '4')
		{
			i++;
		}
		else if (argc == 2 && i % 2 == 1 && argv[1][i] == ' ')
		{
			i++;
		}
		else
		{
			ft_putstr("Error");
			ft_putchar('\n');
			return (0);
		}	
	}	
	return (1);
}
