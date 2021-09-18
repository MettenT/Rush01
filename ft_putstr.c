/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 12:50:54 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/18 12:50:55 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_h/ft_putchar.h"
#include "_h/ft_putstr.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}