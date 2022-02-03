/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:48:14 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/17 11:06:54 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d, char f)
{	
	char	 buf[5];

	buf[0] = c;
	buf[1] = d;
	buf[2] = f;
	buf[3] = ',';
	buf[4] = ' ';
	if (c == '7' && d == '8' && f == '9')
		write(1, buf, 3);
	else
		write(1, buf, 5);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
					ft_putchar(i, j, k);
				k++;
			}
			k = '2';
			j++;
		}
		j = '1';
		i++;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}
