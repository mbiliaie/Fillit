/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 22:01:00 by istalevs          #+#    #+#             */
/*   Updated: 2017/12/29 12:33:50 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_first_move(int *trm)
{
	int i;
	int min_x;
	int min_y;

	i = 0;
	min_x = 10;
	min_y = 10;
	while (i < 8)
	{
		if (i == 0 || i % 2 != 1)
			min_x = (min_x < trm[i]) ? min_x : trm[i];
		i++;
		if (i % 2 == 1)
			min_y = (min_y < trm[i]) ? min_y : trm[i];
		i++;
	}
	i = 0;
	while (i < 8)
	{
		if (i == 0 || i % 2 != 1)
			trm[i++] -= min_x;
		if (i % 2 == 1)
			trm[i++] -= min_y;
	}
}
