/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_magic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:20:00 by istalevs          #+#    #+#             */
/*   Updated: 2018/01/12 15:43:07 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		magic(char *field, int cnt, int const *trm_crd, const int *add_move)
{
	size_t	t;
	size_t	side;
	size_t	tmp;

	t = 0;
	tmp = 0;
	side = ft_side(field);
	while (*(field + t + add_move[cnt]))
	{
		if (ft_check_trm_in_field(field + t, trm_crd, side))
			tmp++;
		if (add_move[cnt] == (int)(tmp - 1))
		{
			ft_trm_in_field(field + t, trm_crd, cnt, side);
			return (1);
		}
		t++;
	}
	return (0);
}
