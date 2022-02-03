/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastbox_row.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 22:53:14 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/23 23:35:48 by tlafont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_y0(int **tab)
{
	int	x;
	int	y;
	int	c;

	x = 1;
	y = 1;
	c = 0;
	while (y <= 4)
	{
		while (x <= 4)
		{
			if (tab[x][y] == 0)
				c++;
			x++;
		}
		if (c == 1)
		{
			return (y);
		}
		c = 0;
		x = 0;
		y++;
	}
	return (0);
}

int	ft_sum_row(int **tab, int y0)
{
	int	x;
	int	sum;

	x = 1;
	sum = 0;
	while (x <= 4)
	{
		sum = tab[x][y0] + sum;
		x++;
	}
	return (sum);
}

int	**ft_last_box_row(int **tab)
{
	int	x;
	int	l;
	int	s;

	x = 1;
	l = ft_y0(tab);
	s = ft_sum_row(tab, l);
	while (x <= 4)
	{
		if (tab[x][l] == 0)
			tab[x][l] = 10 - s;
		x++;
	}	
	return (tab);
}
