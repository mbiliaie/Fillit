/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 11:34:00 by istalevs          #+#    #+#             */
/*   Updated: 2018/01/27 19:53:49 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	*ft_booster(int sq_ct, char *field, size_t trm_ct)
{
	free(field);
	field = field_mk(trm_ct, sq_ct);
	return (field);
}

void		ft_fillit(char *fld, int *a_m, size_t trm_ct, int **trm_crd)
{
	int		count;
	int		sq_ct;
	int		test;

	count = 1;
	sq_ct = 0;
	if (trm_ct > 3 && ft_fucker((int const**)trm_crd, trm_ct + 1))
		fld = ft_booster(++sq_ct, fld, trm_ct);
	while ((size_t)count < (trm_ct + 1))
	{
		if ((test = magic(fld, count, trm_crd[count], a_m)))
			count++;
		if (!test && !(a_m[count] = 0) && (ft_del_one_trm(fld, --count)))
			ft_add_move(a_m, (size_t)count, ft_strlen(fld), trm_ct);
		if (a_m[0] > 0)
		{
			sq_ct++;
			count = 1;
			a_m[0] = 0;
			fld = ft_booster(sq_ct, fld, trm_ct);
		}
	}
	ft_putstr(fld);
}
