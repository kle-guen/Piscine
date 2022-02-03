/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_31_more.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:38:27 by lvignal           #+#    #+#             */
/*   Updated: 2022/01/23 20:38:32 by lvignal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "prototype.h"

int	**ft_32_more_row(int **tab)
{
	int	y;

	y = 0;
	while (y <= 5)
	{
		if (tab[0][y] == 3 && tab[5][y] == 2
			&& tab[3][y] == 4 && tab[4][y] == 1)
		{
			tab[1][y] = 2;
			tab[2][y] = 3;
		}
		if (tab[0][y] == 2 && tab[5][y] == 3
			&& tab[1][y] == 1 && tab[2][y] == 4)
		{
			tab[3][y] = 3;
			tab[4][y] = 2;
		}
		y++;
	}
	return (tab);
}

int	**ft_32_more_col(int **tab)
{
	int	x;

	x = 0;
	while (x <= 5)
	{
		if (tab[x][0] == 3 && tab[x][5] == 2
			&& tab[x][3] == 4 && tab[x][4] == 1)
		{
			tab[x][1] = 2;
			tab[x][2] = 3;
		}
		if (tab[x][0] == 2 && tab[x][5] == 3
			&& tab[x][1] == 1 && tab[x][2] == 4)
		{
			tab[x][3] = 3;
			tab[x][4] = 2;
		}
		x++;
	}
	return (tab);
}
