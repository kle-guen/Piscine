/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bloc_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclauzel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:12:46 by aclauzel          #+#    #+#             */
/*   Updated: 2022/01/30 20:27:54 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"
#include <unistd.h>

void	bloc_billion_2(int l, char *argv, char *str)
{
	if (l >= 12 && (argv[l - 12] != '0'))
	{
		ft_hundred(argv[l - 12], str);
		write(1, " ", 1);
	}
	if (l >= 11 && (argv[l - 11] != '0'))
	{
		ft_ten(argv[l - 11], argv[l - 10], str);
		write(1, " ", 1);
	}
	if (argv[l - 10] != '0' && (argv[l - 11] != '1'))
	{
		ft_unit(argv[l - 10], str);
		write(1, " ", 1);
	}
	if (argv[l - 10] == '0' && l == 10)
	{
		ft_unit(argv[l - 10], str);
		write(1, " ", 1);
	}
}

void	bloc_billion_1(int l, char *argv, char *str)
{		
	char	*trv;

	bloc_billion_2(l, argv, str);
	trv = ft_strstr(str, "1000000000");
	ft_sort(trv);
	if (argv[l - 9] != '0' || argv[l - 8] != '0' || argv[l - 7] != 0)
		write(1, " ", 1);
}

void	bloc_million_2(int l, char *argv, char *str)
{
	if (l >= 9 && (argv[l - 9] != '0'))
	{
		ft_hundred(argv[l - 9], str);
		write(1, " ", 1);
	}
	if (l >= 8 && (argv[l - 8] != '0'))
	{
		ft_ten(argv[l - 8], argv[l - 7], str);
		write(1, " ", 1);
	}
	if (argv[l - 7] != '0' && (argv[l - 8] != '1'))
	{
		ft_unit(argv[l - 7], str);
		write(1, " ", 1);
	}
	if (argv[l - 7] == '0' && l == 7)
	{
		ft_unit(argv[l - 7], str);
		write(1, " ", 1);
	}
}

void	bloc_million_1(int l, char *argv, char *str)
{
	char	*trv;

	bloc_million_2(l, argv, str);
	trv = ft_strstr(str, "1000000");
	ft_sort(trv);
	if (argv[l - 6] != '0' || argv[l - 5] != '0' || argv[l - 4] != 0)
		write(1, " ", 1);
}
