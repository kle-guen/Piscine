/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastbox_col.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 22:55:35 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/23 23:38:47 by tlafont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_x0(int **tab)
{
	int	x;
	int	y;
	int	c;

	x = 1;
	y = 1;
	c = 0;
	while (x <= 4)
	{
		while (y <= 4)
		{
			if (tab[x][y] == 0)
				c++;
			y++;
		}
		if (c == 1)
		{
			return (x);
		}
		y = 0;
		c = 0;
		x++;
	}
	return (0);
}

int	ft_sum_col(int **tab, int x0)
{
	int	y;
	int	sum;

	y = 1;
	sum = 0;
	while (y <= 4)
	{
		sum = tab[x0][y] + sum;
		y++;
	}
	return (sum);
}

int	**ft_last_box_col(int **tab)
{
	int	y;
	int	c;
	int	s;

	y = 1;
	c = ft_x0(tab);
	s = ft_sum_col(tab, c);
	while (y <= 4)
	{
		if (tab[c][y] == 0)
			tab[c][y] = 10 - s;
		y++;
	}	
	return (tab);
}
