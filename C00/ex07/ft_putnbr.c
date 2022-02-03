/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:25:42 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/20 18:32:59 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		mod;
	int		i;
	int		div;
	char	neg;	

	div = 0;
	mod = 0;
	i = 10;
	neg = '-';
	if (nb == -2147483648)
	{
		write(1, &neg, 1);
		write(1, "2147483648", 10);
	}
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, &neg, 1);
		}
		while (nb / i >= 10)
			i *= 10;
		while (i >= 10)
		{
			div = '0' + (nb / i);
			write(1, &div, 1);
			nb -= (nb / i) * i;
			i /= 10;
		}
		mod = '0' + (nb % 10);
		write(1, &mod, 1);
	}
}
