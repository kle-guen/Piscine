/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:54:56 by tlafont           #+#    #+#             */
/*   Updated: 2022/01/23 23:38:21 by tlafont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "prototype.h"

int	ft_check_error(int argc, char **argv, char *cpy);

int	main(int argc, char **argv)
{
	char	*cpy;
	int		**tab;

	cpy = malloc(sizeof(char) * 20);
	cpy = ft_string(argv[1], cpy);
	if (ft_check_error(argc, argv, cpy) == 0)
	{
		ft_error();
		return (0);
	}
	tab = ft_init_tab();
	ft_launch(tab, cpy);
	ft_print_tab(tab);
	return (0);
}

void	ft_launch(int **tab, char *str)
{
	tab = ft_index_tab(str, tab);
	tab = ft_1234_up(tab);
	tab = ft_1234_down(tab);
	tab = ft_1234_left(tab);
	tab = ft_1234_right(tab);
	tab = ft_12_up(tab);
	tab = ft_12_down(tab);
	tab = ft_12_left(tab);
	tab = ft_12_right(tab);
	tab = ft_32_row(tab);
	tab = ft_32_col(tab);
	ft_loop(tab);
}

void	ft_loop(int **tab)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		tab = sudoku(tab);
		tab = ft_last_box_col(tab);
		tab = ft_last_box_row(tab);
		i++;
	}
}

int	ft_check_error(int argc, char **argv, char *cpy)
{
	if (ft_error_argv(argc, argv) == 0)
		return (0);
	else
	{
		if (ft_echec_resolv(cpy) == 0)
			return (0);
		else
		{
			if (ft_wrong_pattern(cpy) == 0)
				return (0);
			else
			{
			}
		}
	}
	return (1);
}
