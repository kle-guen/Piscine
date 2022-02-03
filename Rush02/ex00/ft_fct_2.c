/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fct_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclauzel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:28:42 by aclauzel          #+#    #+#             */
/*   Updated: 2022/01/30 20:35:26 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"
#include <unistd.h>

char	*ft_charstr(char *str, char to_find)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find && (str[i - 1] < 48 || str[i - 1] > 57 ))
			if (str[i + 1] < 48 || str[i + 1] > 57)
				return (str + i);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_parcel_out(char *str, char *argv)
{
	int	l;

	l = ft_strlen(argv);
	if (l >= 10 && argv[l - 10])
		bloc_billion_1(l, argv, str);
	if (l >= 7 && argv[l - 7])
		bloc_million_1(l, argv, str);
	if (l >= 4 && argv[l - 4])
		bloc_thousand_1(l, argv, str);
	bloc_hundred(l, argv, str);
}
