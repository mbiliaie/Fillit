/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 17:15:31 by mbiliaie          #+#    #+#             */
/*   Updated: 2018/01/12 15:52:27 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	ft_putstr(char *str);
char	*ft_reader(char **ar);
size_t	ft_strlen(char *str);
int		ft_str_vld(char *str);
int		ft_trm_vld(char const *s);
size_t	ft_trm_ct(char *str);
void	*ft_memset(void *b, int c, size_t len);
char	*field_mk(size_t trm_num, int sq_ct);
int		ft_sqrt(int nb);
int		**ft_arr_mk(size_t trm_ct);
void	ft_first_move(int *trm);
int		*ft_read_trm(char const *trm_char);
void	ft_fillit(char *fld, int *a_m,
					size_t trm_ct, int **trm_coordinates);
int		**ft_trm_mk_mv(char *input, size_t trm_ct);
size_t	ft_side(char *field);
int		ft_check_trm_in_field(const char *field,
								const int *trm_crd, size_t side);
void	ft_trm_in_field(char *field, const int *trm_coordinates,
						int x, size_t side);
int		*ft_make_add_move(size_t trm_ct);
int		ft_del_one_trm(char *field, int x);
void	ft_add_move(int *add, size_t count, size_t field_len, size_t trm_ct);
int		ft_fucker(int const**trm_coordinates, size_t trm_ct);
int		magic(char *field, int count,
				int const *trm_coordinates, const int *add_move);

#endif
