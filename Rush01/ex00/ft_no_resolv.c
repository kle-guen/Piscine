/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_no_resolv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:02:57 by tlafont           #+#    #+#             */
/*   Updated: 2022/01/23 19:53:31 by tlafont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "prototype.h"
#include <stdlib.h>

int	ft_wrong_pattern(char *str)
{
	if (ft_wrong_col(str) == 0)
		return (0);
	else
		return (1);
}

int	ft_wrong_col(char *str)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	j = 4;
	a = 0;
	while (i < 4)
	{
		a = (str[i] - 48) + (str[j] - 48);
		if (a >= 3 && a <= 5)
		{
			i++;
			j++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int	ft_wrong_row(char *str)
{
	int	i;
	int	j;
	int	a;

	i = 8;
	j = 12;
	while (i < 12)
	{
		a = (str[i] - 48) + (str[j] - 48);
		if (a < 3 || a > 5)
			return (0);
		else
		{
			i++;
			j++;
		}
	}
	return (1);
}
