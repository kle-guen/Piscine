/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialisation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 08:51:19 by tlafont           #+#    #+#             */
/*   Updated: 2022/01/23 20:02:04 by tlafont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "prototype.h"

int	ft_check_args(char *argv)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (argv[i] != '\0')
	{
		if ((argv[i] >= '1' && argv[i] <= '4') && (nb == 0))
		{
			nb++;
			i++;
		}
		else if (argv[i] == ' ' && nb == 1)
		{
			i++;
			nb = 0;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

char	*ft_string(char *argv, char *cpy)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] == ' ')
			i++;
		else
		{
			cpy[j] = argv[i];
			j++;
			i++;
		}
	}
	cpy[j] = '\0';
	return (cpy);
}

int	**ft_init_tab(void)
{
	int	i;
	int	**tab;

	i = 0;
	tab = malloc(sizeof(void *) * 6);
	while (i < 6)
	{
		tab[i] = malloc(sizeof(int) * 6);
		i++;
	}
	return (tab);
}

int	**ft_index_tab(char *str, int **tab)
{
	tab[1][0] = str[0] - '0';
	tab[2][0] = str[1] - '0';
	tab[3][0] = str[2] - '0';
	tab[4][0] = str[3] - '0';
	tab[1][5] = str[4] - '0';
	tab[2][5] = str[5] - '0';
	tab[3][5] = str[6] - '0';
	tab[4][5] = str[7] - '0';
	tab[0][1] = str[8] - '0';
	tab[0][2] = str[9] - '0';
	tab[0][3] = str[10] - '0';
	tab[0][4] = str[11] - '0';
	tab[5][1] = str[12] - '0';
	tab[5][2] = str[13] - '0';
	tab[5][3] = str[14] - '0';
	tab[5][4] = str[15] - '0';
	return (tab);
}

int	ft_echec_resolv(char *str)
{
	int	som;

	som = ft_add_str(str, 0);
	if (som < 32 || som > 36)
		return (0);
	else if (ft_col_up_add(str) == 0)
		return (0);
	else if (ft_col_down_add(str) == 0)
		return (0);
	else if (ft_row_left_add(str) == 0)
		return (0);
	else if (ft_row_right_add(str) == 0)
		return (0);
	else
	{
		return (1);
	}
}
