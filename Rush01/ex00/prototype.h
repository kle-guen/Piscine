/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototype.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 09:37:28 by tlafont           #+#    #+#             */
/*   Updated: 2022/01/23 23:16:24 by tlafont          ###   ########.fr       */
/*   Updated: 2022/01/23 13:57:01 by tlafont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPE_H
# define PROTOTYPE_H

int		ft_check_args(char *argv);
char	*ft_string(char *argv, char *cpy);
int		**ft_init_tab(void);
int		**ft_index_tab(char *str, int **tab);
int		ft_strlen(char *str);
void	ft_error(void);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_1234(int **tab);
int		**ft_1234_up(int **tab);
int		**ft_1234_down(int **tab);
int		**ft_1234_left(int **tab);
int		**ft_1234_right(int **tab);
int		**ft_12_up(int **tab);
int		**ft_12_down(int **tab);
int		**ft_12_left(int **tab);
int		**ft_12_right(int **tab);
int		**ft_32_col(int **tab);
int		**ft_32_row(int **tab);
int		ft_error_argv(int argc, char **argv);
int		ft_add_str(char *str, int z);
int		ft_echec_resolv(char *str);
int		ft_col_up_add(char *str);
int		ft_col_down_add(char *str);
int		ft_row_left_add(char *str);
int		ft_row_right_add(char *str);
int		ft_wrong_pattern(char *str);
int		ft_wrong_col(char *str);
int		ft_wrong_row(char *str);
int		**ft_31_row(int **tab);
int		**ft_31_col(int **tab);
int		**ft_32_row(int **tab);
void	ft_print_tab(int **tab);
int		ft_x0(int **tab);
int		ft_sum_col(int **tab, int x0);
int		**ft_last_box_row(int **tab);
int		ft_y0(int **tab);
int		ft_sum_row(int **tab, int y0);
int		**ft_last_box_col(int **tab);
int		ft_check_error(int argc, char **argv, char *cpy);
int		find1(int **tab);
int		find2(int **tab);
int		find3(int **tab);
int		find4(int **tab);
int		freecol(int **tab, int n);
int		freeline(int **tab, int n);
int		**sudoku(int **tab);
int		**ft_32_more_row(int **tab);
int		**ft_32_more_col(int **tab);
void	ft_launch(int **tab, char *str);
void	ft_loop(int **tab);
#endif
