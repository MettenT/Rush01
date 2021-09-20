#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdlib.h> // to use malloc

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_invalid(int argc, char *argv[]);
void	ft_print_array(int *nbr[]);
char	*ft_remove_white_spaces(char *input);
void	ft_initialize_array(int *nbr[]);
int		**ft_create_matrix(void);
// int ft_check_conditions(int *nbr[], char *input);
// int ft_check_double(int *nbr[]);

// void	ft_print_params(int, char**);
// char ft_create_array_input(char *str[]);

#endif

// #ifndef MAIN_H        if definition of MAIN_H doesn't exist - Avoids getting into an endless loop since this will only activate once when the definition isn't there yet  
// # define MAIN_H		 DEFINE MAIN_H


if (!i) // if i does not exist
{
	int i; // create i
	i = 0;
}
// will not go in if again since i already exists