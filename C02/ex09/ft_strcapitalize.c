/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:06:16 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/19 16:27:08 by kle-guen         ###   ########.fr       */
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

int	ft_char_is_alphanum(char a)
{
	if ((a < 65 || a > 90) && (a < 97 || a > 122) && (a < 48 || a > 57))
		return (0);
	return (1);
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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (i < len(str))
	{	
		if (ft_char_is_alphanum(str[i]))
		{	
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
				i++;
			}	
			else
				i++;
			while (ft_char_is_alphanum(str[i]))
				i++;
		}
		i++;
	}
	return (str);
}
