/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:24:01 by tlafont           #+#    #+#             */
/*   Updated: 2022/01/23 20:00:12 by tlafont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "prototype.h"

int	ft_error_argv(int argc, char **argv)
{
	if (argc == 2 && ft_strlen(argv[1]) == 31 && (argv[1][0] >= '1'
		&& argv[1][0] <= '4'))
	{
		if (ft_check_args(argv[1]) == 0)
			return (0);
	}
	else
	{
		return (0);
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_error(void)
{
	ft_putstr("Error\n");
}

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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
