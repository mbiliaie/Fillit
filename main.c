/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 23:02:55 by mbiliaie          #+#    #+#             */
/*   Updated: 2018/01/12 15:38:37 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	char	*input;
	char	*field;
	size_t	trm_ct;

	if (argc != 2)
	{
		ft_putstr("usage: Wrong number of arguments. Pass 1 file!\n");
		return (0);
	}
	input = ft_reader(argv);
	if (!input || ft_str_vld(input) || ft_trm_vld(input))
	{
		ft_putstr("error\n");
		return (0);
	}
	trm_ct = ft_trm_ct(input);
	field = field_mk(trm_ct, 0);
	ft_fillit(field, ft_make_add_move(trm_ct + 1),
				trm_ct, ft_trm_mk_mv(input, trm_ct));
	return (0);
}
