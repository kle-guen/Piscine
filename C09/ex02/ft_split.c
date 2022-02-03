/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 22:40:57 by kle-guen          #+#    #+#             */
/*   Updated: 2022/02/02 23:59:50 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_charstr(char *str, char *to_find)
{
	int	i;
	int	c;
	int	j;

	j = 0;
	i = 0;
	c = 0;
	while (str[i])
	{	
		while (to_find[j])
		{	
			if (str[i] == to_find[j])
				c++;
			j++;
		}
		j = 0;
		i++;
	}
	return (c);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char **ft_split(char *str, char *charset)
{
	int	*tab;
	char	*tab2;
	int	i;
	int	j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	tab = malloc(sizeof(char) * ft_charstr(str, charset) + 1);
	while (str[i])
	{
		while (to_find[j])
		{
			if (str[i] == to_find[j])
			{
				tab2[i] = str + i;
				while (str[i + k] != to_find[j + k])
					k++;
				i++;
				k = 0;
				tab2[k] = '\0';
				tab[i] = tab2
			}
			j++;
		}
		j = 0;
		i++;
	}
}

#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%d", ft_charstr(av[1], av[2]));
	return (0);
}
