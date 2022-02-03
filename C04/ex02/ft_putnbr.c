/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:29:14 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/30 23:16:58 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	nbr = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nbr = -nb;
	}
	if (nbr < 10)
		ft_putchar(nbr + 48);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
}
