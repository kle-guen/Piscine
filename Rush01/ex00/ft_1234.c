/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_1234.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:23:43 by lvignal           #+#    #+#             */
/*   Updated: 2022/01/23 10:39:58 by lvignal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "prototype.h"

int	**ft_1234_up(int **tab)
{
	int	x;	
	int	y;

	x = 0;
	y = 0;
	while (x != 6 && y != 6)
	{
		while (x != 6)
		{
			if (y == 0 && tab[x][y] == 4)
			{
				tab[x][1] = 1;
				tab[x][2] = 2;
				tab[x][3] = 3;
				tab[x][4] = 4;
			}
			x++;
		}
		y++;
		x = 0;
	}
	return (tab);
}

int	**ft_1234_down(int **tab)
{
	int	x;	
	int	y;

	x = 0;
	y = 0;
	while (x != 6 && y != 6)
	{
		while (x != 6)
		{
			if (y == 5 && tab[x][y] == 4)
			{
				tab[x][4] = 1;
				tab[x][3] = 2;
				tab[x][2] = 3;
				tab[x][1] = 4;
			}
			x++;
		}
		y++;
		x = 0;
	}
	return (tab);
}

int	**ft_1234_left(int **tab)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x != 6 && y != 6)
	{
		while (x != 6)
		{
			if (x == 0 && tab[x][y] == 4)
			{
				tab[1][y] = 1;
				tab[2][y] = 2;
				tab[3][y] = 3;
				tab[4][y] = 4;
			}
			x++;
		}
		y++;
		x = 0;
	}
	return (tab);
}

int	**ft_1234_right(int **tab)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x != 6 && y != 6)
	{
		while (x != 6)
		{
			if (x == 5 && tab[x][y] == 4)
			{
				tab[4][y] = 1;
				tab[3][y] = 2;
				tab[2][y] = 3;
				tab[1][y] = 4;
			}
			x++;
		}
		y++;
		x = 0;
	}
	return (tab);
}
