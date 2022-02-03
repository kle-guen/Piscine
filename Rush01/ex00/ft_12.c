/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_12.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:23:43 by lvignal           #+#    #+#             */
/*   Updated: 2022/01/23 12:43:24 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

int	**ft_12_left(int **tab)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < 6)
	{
		while (x < 6)
		{
			if (tab[0][y] == 2 && tab[5][y] == 1)
			{
				tab[1][y] = 3;
				tab[4][y] = 4;
			}
			x++;
		}
		y++;
		x = 0;
	}	
	return (tab);
}

int	**ft_12_right(int **tab)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 6)
	{
		while (y < 6)
		{
			if (tab[5][y] == 2 && tab[0][y] == 1)
			{
				tab[1][y] = 4;
				tab[4][y] = 3;
			}
			y++;
		}
		x++;
		y = 0;
	}	
	return (tab);
}

int	**ft_12_up(int **tab)
{
	int	x;	
	int	y;

	x = 0;
	y = 0;
	while (y < 6)
	{
		while (x < 6)
		{
			if (tab[x][0] == 2 && tab[x][5] == 1)
			{
				tab[x][1] = 3;
				tab[x][4] = 4;
			}
			x++;
		}
		y++;
		x = 0;
	}
	return (tab);
}

int	**ft_12_down(int **tab)
{
	int	x;	
	int	y;

	x = 0;
	y = 0;
	while (y < 6)
	{
		while (x < 6)
		{
			if (tab[x][5] == 2 && tab[x][0] == 1)
			{
				tab[x][1] = 4;
				tab[x][4] = 3;
			}
			x++;
		}
		y++;
		x = 0;
	}
	return (tab);
}
