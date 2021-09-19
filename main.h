#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_invalid(int argc, char *argv[]);
void	ft_print_array(int *nbr[]);
char	*ft_remove_white_spaces(char *input);
void	ft_initialize_array(int *nbr[]);
// int ft_check_conditions(int *nbr[], char *input);
// int ft_check_double(int *nbr[]);

// void	ft_print_params(int, char**);
// char ft_create_array_input(char *str[]);

#endif