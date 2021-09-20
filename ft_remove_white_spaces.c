/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_str_input.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:09:45 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/18 18:09:46 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*ft_remove_white_spaces(char *str)
{
	int	i;
	int	j;
	// char *result;

	i = 0;	
	while (str[i]) // if str[i] exists
	{
		j = 0;			
		if (str[i] != ' ') // if charachter is not a 'space' copy the charachter
		{
			str[j] = str[i]; 
			// result[j] = str[i];
			j++;
		}		
		i++;
	}
	str[j] = '\0';
	return (str); 
	// return (result);
}
