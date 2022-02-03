/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:38:00 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/26 16:08:34 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_src;
	unsigned int	len_dest;

	i = 0;
	j = 0;
	len_src = 0;
	len_dest = 0;
	while (dest[i])
		i++;
	len_src = ft_strlen(src);
	len_dest = i;
	while (src[j] && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (size < len_dest)
		dest[i] = '\0';
	if (size == 0 || size > len_dest)
		return (len_src + len_dest);
	return (len_src + size);
}
