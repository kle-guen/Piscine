/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototype.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdreuil <bdreuil@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:18:14 by kle-guen          #+#    #+#             */
/*   Updated: 2022/01/30 20:34:41 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPE_H
# define PROTOTYPE_H

void	bloc_billion_2(int l, char *argv, char *str);

void	bloc_billion_1(int l, char *argv, char *str);

void	bloc_million_2(int l, char *argv, char *str);

void	bloc_million_1(int l, char *argv, char *str);

void	bloc_thousand_2(int l, char *argv, char *str);

void	bloc_thousand_1(int l, char *argv, char *str);

void	bloc_hundred(int l, char *argv, char *str);

int		ft_error(char *str);

int		ft_strcmp(char *intmax, char *str);

void	ft_putstr(char *find);

void	ft_init(int *i, int *j, int *c);

void	ft_sort(char *str);

char	*ft_strstr(char *str, char *to_find);

char	*ft_charstr(char *str, char to_find);

int		ft_strlen(char *str);

void	ft_parcel_out(char *str, char *argv);

void	ft_unit(char c, char *str);

void	ft_ten(char d, char u, char *str);

void	ft_hundred(char c, char *str);

void	ft_thousand(char c, char *str);

void	ft_million(char c, char *str);

void	ft_billion(char c, char *str);

void	ft_nextten(char d, char *str);

void	ft_oneten(char u, char *str);

void	ft_twoten(char u, char *str);

void	ft_launch_1(char *av);

void	ft_launch_2(char *av1, char *av2);

#endif
