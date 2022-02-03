/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdreuil <bdreuil@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:25:22 by bdreuil           #+#    #+#             */
/*   Updated: 2022/01/30 16:18:33 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"
#include <unistd.h>

int	ft_error(char *str)
{
	int		i;
	char	*intmax;

	intmax = "4294967295";
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || (str[i] > '9'))
			return (1);
		if (str[0] == '-')
			return (1);
		if (str[0] == '0' && str[1] != '\0')
			return (1);
		i++;
	}
	if (ft_strlen(intmax) == ft_strlen(str) && ft_strcmp(intmax, str) < 0)
	{
		return (1);
	}
	else if (ft_strlen(intmax) < ft_strlen(str))
		return (1);
	else
		return (0);
}

int	ft_strcmp(char *intmax, char *str)
{
	int	i;

	i = 0;
	while ((intmax[i] == str[i]) && (intmax[i] != '\0') && (str[i] != '\0'))
	{
		i++;
	}
	return (intmax[i] - str[i]);
}
