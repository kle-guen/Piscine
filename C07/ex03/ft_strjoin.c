/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:18:48 by kle-guen          #+#    #+#             */
/*   Updated: 2022/02/01 17:49:16 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_empty_char(void)
{
	char	*str;

	str = malloc(sizeof(char) * 1);
	str[0] = '\0';
	return (str);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*set_zero(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = 0;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		c;

	i = 0;
	c = 0;
	if (size == 0)
		return (ft_empty_char());
	while (i < size)
	{
		c += ft_strlen(strs[i]);
		i++;
	}
	str = malloc(sizeof(char) * (c + size - 1));
	if (str == NULL)
		return (NULL);
	str = set_zero(str);
	i = -1;
	while (++i < size - 1)
	{
		ft_strcat(str, strs[i]);
		ft_strcat(str, sep);
	}
	ft_strcat(str, strs[i]);
	return (str);
}
