/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:11:14 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/23 23:34:27 by tlafont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"

int	find1(int	**tab)
{
	int	x;
	int	y;
	int	c1;

	x = 1;
	y = 1;
	c1 = 0;
	while (x < 5)
	{
		while (y < 5)
		{
			if (tab[x][y] == 1)
				c1++;
			y++;
		}
		y = 1;
		x++;
	}
	if (c1 == 3)
		return (1);
	else
		return (0);
}

int	find2(int	**tab)
{
	int	x;
	int	y;
	int	c2;

	x = 1;
	y = 1;
	c2 = 0;
	while (x < 5)
	{
		while (y < 5)
		{
			if (tab[x][y] == 2)
				c2++;
			y++;
		}
		y = 1;
		x++;
	}
	if (c2 == 3)
		return (2);
	else
		return (0);
}

int	find3(int	**tab)
{
	int	x;
	int	y;
	int	c3;

	x = 1;
	y = 1;
	c3 = 0;
	while (x < 5)
	{
		while (y < 5)
		{
			if (tab[x][y] == 3)
				c3++;
			y++;
		}
		y = 1;
		x++;
	}
	if (c3 == 3)
		return (3);
	else
		return (0);
}

int	find4(int	**tab)
{
	int	x;
	int	y;
	int	c4;

	x = 1;
	y = 1;
	c4 = 0;
	while (x < 5)
	{
		while (y < 5)
		{
			if (tab[x][y] == 4)
				c4++;
			y++;
		}
		y = 1;
		x++;
	}
	if (c4 == 3)
		return (4);
	else
		return (0);
}

int	freecol(int **tab, int n)
{
	int	x;
	int	y;
	int	xlibre;

	x = 1;
	y = 1;
	xlibre = 0;
	while (x < 5 && xlibre == 0)
	{
		xlibre = x;
		while (y < 5)
		{
			if (tab[x][y] == n)
				xlibre = 0;
			y++;
		}
		y = 1;
		x++;
	}
	return (xlibre);
}
