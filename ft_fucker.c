/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fucker.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:17:00 by istalevs          #+#    #+#             */
/*   Updated: 2018/01/12 15:41:54 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_fucker(int const **trm_coordinates, size_t trm_ct)
{
	static int	coub[] = {0, 0, 1, 0, 0, 1, 1, 1};
	size_t		cunt;
	size_t		fuck;
	int			i;

	cunt = 1;
	fuck = 0;
	i = 0;
	while (cunt < trm_ct)
	{
		while (i < 8)
		{
			if (trm_coordinates[cunt][i] == coub[i])
				fuck++;
			i++;
		}
		i = 0;
		cunt++;
	}
	if (fuck == (trm_ct - 1) * 8)
		return (1);
	return (0);
}
