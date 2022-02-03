/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 23:33:03 by tlafont           #+#    #+#             */
/*   Updated: 2022/01/23 23:40:19 by tlafont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "prototype.h"

int	freeline(int **tab, int n)
{
	int	x;
	int	y;
	int	ylibre;

	x = 1;
	y = 1;
	ylibre = 0;
	while (y < 5 && ylibre == 0)
	{
		ylibre = y;
		while (x < 5)
		{
			if (tab[x][y] == n)
				ylibre = 0;
			x++;
		}
		x = 1;
		y++;
	}
	return (ylibre);
}

int	**sudoku(int **tab)
{
	int	xlibre;
	int	ylibre;
	int	n;

	n = find1(tab) + find2(tab) + find3(tab) + find4(tab);
	if (n != 0)
	{
		xlibre = freecol(tab, n);
		ylibre = freeline(tab, n);
		tab[xlibre][ylibre] = n;
	}
	else
		return (tab);
	return (tab);
}
