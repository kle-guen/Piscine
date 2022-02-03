/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 21:43:51 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/18 23:24:25 by kle-guen         ###   ########.fr       */
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

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (i < len(str))
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
