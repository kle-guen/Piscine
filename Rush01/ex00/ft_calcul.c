/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 13:21:41 by tlafont           #+#    #+#             */
/*   Updated: 2022/01/23 19:50:10 by tlafont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "prototype.h"
#include <stdlib.h>

int	ft_add_str(char *str, int z)
{
	int	i;

	i = 1;
	z = str[0] - 48;
	while (str[i] != '\0')
	{
		z = z + (str[i] - 48);
		i++;
	}
	return (z);
}

int	ft_col_up_add(char *str)
{
	int	i;

	i = (str[0] - 48) + (str[1] - 48) + (str[2] - 48) + (str[3] - 48);
	if (i < 7 || i > 10)
		return (0);
	else
		return (1);
}

int	ft_col_down_add(char *str)
{
	int	i;

	i = (str[4] - 48) + (str[5] - 48) + (str[6] - 48) + (str[7] - 48);
	if (i < 7 || i > 10)
		return (0);
	else
		return (1);
}

int	ft_row_left_add(char *str)
{
	int	i;

	i = (str[8] - 48) + (str[9] - 48) + (str[10] - 48) + (str[11] - 48);
	if (i < 7 || i > 10)
		return (0);
	else
		return (1);
}

int	ft_row_right_add(char *str)
{
	int	i;

	i = (str[12] - 48) + (str[13] - 48) + (str[14] - 48) + (str[15] - 48);
	if (i < 7 || i > 10)
		return (0);
	else
		return (1);
}
