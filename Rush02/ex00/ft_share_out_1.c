/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_share_out_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdreuil <bdreuil@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:46:55 by aclauzel          #+#    #+#             */
/*   Updated: 2022/01/30 12:51:34 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"
#include <unistd.h>

void	ft_unit(char c, char *str)
{
	char	*find;

	find = ft_charstr(str, c);
	ft_sort(find);
}

void	ft_hundred(char c, char *str)
{
	char	*find;
	char	*trv;

	find = ft_charstr(str, c);
	ft_sort(find);
	write(1, " ", 1);
	trv = ft_strstr(str, "100");
	ft_sort(trv);
}

void	ft_thousand(char c, char *str)
{
	char	*find;
	char	*trv;

	find = ft_charstr(str, c);
	ft_sort(find);
	write(1, " ", 1);
	trv = ft_strstr(str, "1000");
	ft_sort(trv);
}

void	ft_million(char c, char *str)
{
	char	*find;
	char	*trv;

	find = ft_charstr(str, c);
	ft_sort(find);
	write(1, " ", 1);
	trv = ft_strstr(str, "1000000");
	ft_sort(trv);
}

void	ft_billion(char c, char *str)
{
	char	*find;
	char	*trv;

	find = ft_charstr(str, c);
	ft_sort(find);
	write(1, " ", 1);
	trv = ft_strstr(str, "1000000000");
	ft_sort(trv);
}
