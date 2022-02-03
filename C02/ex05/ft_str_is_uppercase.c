/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:22:25 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/19 11:08:25 by kle-guen         ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (i < len(str))
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
