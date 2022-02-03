/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 01:33:22 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/31 15:29:18 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (ac - i != 0)
	{
		ft_putstr(av[ac - i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
