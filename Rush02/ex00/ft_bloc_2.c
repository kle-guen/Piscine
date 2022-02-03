/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bloc_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclauzel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:42:54 by aclauzel          #+#    #+#             */
/*   Updated: 2022/01/30 20:21:00 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"
#include <unistd.h>

void	bloc_thousand_2(int l, char *argv, char *str)
{
	if (l >= 6 && (argv[l - 6] != '0'))
	{
		ft_hundred(argv[l - 6], str);
		write(1, " ", 1);
	}
	if (l >= 5 && (argv[l - 5] != '0'))
	{
		ft_ten(argv[l - 5], argv[l - 4], str);
		write(1, " ", 1);
	}
	if (argv[l - 4] != '0' && (argv[l - 5] != '1'))
	{
		ft_unit(argv[l - 4], str);
		write(1, " ", 1);
	}
	if (argv[l - 4] == '0' && l == 4)
	{
		ft_unit(argv[l - 4], str);
		write(1, " ", 1);
	}
}

void	bloc_thousand_1(int l, char *argv, char *str)
{
	char	*trv;

	bloc_thousand_2(l, argv, str);
	trv = ft_strstr(str, "1000");
	ft_sort(trv);
	if (argv[l - 3] != '0' || argv[l - 2] != '0' || argv[l - 1] != '0')
		write(1, " ", 1);
}

void	bloc_hundred(int l, char *argv, char *str)
{
	if (l >= 3 && argv[l - 3] != '0')
	{
		ft_hundred(argv[l - 3], str);
		if (argv[l - 2] != '0' || argv[l - 1] != '0')
			write(1, " ", 1);
	}
	if (l >= 2 && (argv[l - 2] != '0'))
	{
		ft_ten(argv[l - 2], argv[l - 1], str);
		if (argv[l - 1] != '0' && argv[l - 2] != '1')
			write(1, " ", 1);
	}
	if (argv[l - 1] != '0' && (argv[l - 2] != '1'))
		ft_unit(argv[l - 1], str);
	if (argv[l - 1] == '0' && l == 1)
		ft_unit(argv[l - 1], str);
	write(1, "\n", 1);
}
