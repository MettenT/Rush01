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
		if (argc == 2 && i % 2 == 0 && '1' <= argv[1][i] && argv[1][i] <= '4') // index 0,2,4,6,.. % 2 == 0    all even indexes (numbers)
		{
			i++; // use modulo 2 to split into even and uneven since result can only be 0 or 1
		}
		else if (argc == 2 && i % 2 == 1 && argv[1][i] == ' ') // index 1,3,5,7,.. % 2 == 1		all uneven indexes (spaces)
		{
			i++;
		}
		else // argc is the count of arguments: (./rush-01) ("4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 5")  =   2
		{	 //// argv is the content of arguments in an array: ./rush-01 = argv[0]       "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 5" = argv[1]  => 4 = argv[1][0]
			ft_putstr("Error");
			ft_putchar('\n');
			return (0);
		}	
	}	
	return (1);
}
