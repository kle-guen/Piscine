/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:48:14 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/17 11:09:19 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d, char f, char g)
{	
	char	 buf[7];

	buf[0] = c;
	buf[1] = d;
	buf[2] = ' ';
	buf[3] = f;
	buf[4] = g;
	buf[5] = ',';
	buf[6] = ' ';
	if (c == '9' && d == '8' && f == '9' && g == '9')
		write(1, buf, 5);
	else
		write(1, buf, 7);
}

void	ft_init(char *i, char *j, char *k, char *l)
{
	*i = '0' - 1;
	*j = '0' - 1;
	*k = '0' - 1;
	*l = '0' - 1;
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	k;
	char	l;

	ft_init(&i, &j, &k, &l);
	while (++i <= '9')
	{
		while (++j <= '9')
		{
			while (++k <= '9')
			{
				while (++l <= '9')
				{
					if (i + j < k + l && i <= k)
						ft_putchar(i, j, k, l);
				}
				l = '0' - 1;
			}
			k = '0' - 1;
		}
		j = '0' - 1;
	}
}

int main()
{
	ft_print_comb2();
	return 0;
}
