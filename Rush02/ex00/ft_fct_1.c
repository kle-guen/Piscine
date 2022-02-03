/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fct_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclauzel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:16:16 by aclauzel          #+#    #+#             */
/*   Updated: 2022/01/30 20:34:58 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"
#include <unistd.h>

void	ft_putstr(char *find)
{
	int	i;

	i = 0;
	while (find[i])
	{
		write(1, &find[i], 1);
		i++;
	}
}

void	ft_sort(char *str)
{
	int		j;
	int		i;
	char	find[300];

	i = 0;
	j = 0;
	while ((str[i] < 59 && str[i] > 47) || str[i] == 32)
		i++;
	while (str[i] >= 32)
	{
		if (str[i] > 32)
			find[j] = str[i];
		else if (((str[i] == 32 || str[i] >= 9) && str[i] <= 13))
		{
			find[j] = ' ';
			while ((str[i] == 32 || str[i] >= 9) && str[i] <= 13)
				i++;
			i--;
		}
		i++;
		j++;
	}
	find[j] = '\0';
	ft_putstr(find);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0' && str[i + j] != 48)
			{
				if (str[i - 1] < 48 || str[i - 1] > 57)
					return (str + i);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
