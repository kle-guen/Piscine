/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:21:46 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/20 17:08:58 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= size - 2)
	{	
		while (j <= size - 1)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(tab + i, tab + j);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}
