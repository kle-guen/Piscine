/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_share_out_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdreuil <bdreuil@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:05:27 by aclauzel          #+#    #+#             */
/*   Updated: 2022/01/29 17:35:27 by bdreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"
#include <unistd.h>

void	ft_ten(char d, char u, char *str)
{
	if (d == '1')
	{
		if (u < '6')
			ft_oneten(u, str);
		else if (u > '5')
			ft_twoten(u, str);
	}
	else if (d > '1')
		ft_nextten(d, str);
}

void	ft_nextten(char d, char *str)
{
	char	*find;

	if (d == '2')
		find = ft_strstr(str, "20");
	else if (d == '3')
		find = ft_strstr(str, "30");
	else if (d == '4')
		find = ft_strstr(str, "40");
	else if (d == '5')
		find = ft_strstr(str, "50");
	else if (d == '6')
		find = ft_strstr(str, "60");
	else if (d == '7')
		find = ft_strstr(str, "70");
	else if (d == '8')
		find = ft_strstr(str, "80");
	else if (d == '9')
		find = ft_strstr(str, "90");
	ft_sort(find);
}

void	ft_oneten(char u, char *str)
{
	char	*find;

	if (u == '0')
		find = ft_strstr(str, "10");
	else if (u == '1')
		find = ft_strstr(str, "11");
	else if (u == '2')
		find = ft_strstr(str, "12");
	else if (u == '3')
		find = ft_strstr(str, "13");
	else if (u == '4')
		find = ft_strstr(str, "14");
	else if (u == '5')
		find = ft_strstr(str, "15");
	ft_sort(find);
}

void	ft_twoten(char u, char *str)
{
	char	*find;

	if (u == '6')
		find = ft_strstr(str, "16");
	else if (u == '7')
		find = ft_strstr(str, "17");
	else if (u == '8')
		find = ft_strstr(str, "18");
	else if (u == '9')
		find = ft_strstr(str, "19");
	ft_sort(find);
}
