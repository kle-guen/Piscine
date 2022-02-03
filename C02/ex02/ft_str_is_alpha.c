/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:19:07 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/18 22:26:11 by kle-guen         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (i < len(str))
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
