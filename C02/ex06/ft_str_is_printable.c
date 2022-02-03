/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:54:05 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/18 23:40:59 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *chaine)
{
	int	longueur;

	longueur = 0;
	while (chaine[longueur] != '\0')
	{
		longueur++;
	}
	return (longueur);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (i < len(str))
	{
		if (str[i] > 0 && str[i] < 32)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
