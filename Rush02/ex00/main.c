/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclauzel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:31:12 by aclauzel          #+#    #+#             */
/*   Updated: 2022/01/30 20:30:11 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "prototype.h"

void	ft_launch_1(char *av)
{
	char	*content;
	int		file;

	content = malloc(sizeof(char) * 10000);
	if (content != NULL)
	{
		file = open("english.txt", O_RDONLY);
		read(file, content, 10000);
		if (read(file, content, 10000) != -1)
			ft_parcel_out(content, av);
		else
			write(1, "Dict Error\n", 11);
		close(file);
		free(content);
	}
}

void	ft_launch_2(char *av1, char *av2)
{
	char	*content;
	int		file;

	content = malloc(sizeof(char) * 10000);
	if (content != NULL)
	{	
		file = open(av1, O_RDONLY);
		read(file, content, 10000);
		if (read(file, content, 10000) != -1)
			ft_parcel_out(content, av2);
		else
			write(1, "Dict Error\n", 11);
		close(file);
		free(content);
	}
	else
		write(1, "Error\n", 6);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{	
		if (ft_error(av[1]) == 0)
			ft_launch_1(av[1]);
		else
			write(1, "Error\n", 6);
	}
	else if (ac == 3)
	{	
		if (ft_error(av[2]) == 0)
			ft_launch_2(av[1], av[2]);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
