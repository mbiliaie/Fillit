/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_one_trm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 19:50:00 by istalevs          #+#    #+#             */
/*   Updated: 2018/01/08 19:50:00 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_del_one_trm(char *field, int x)
{
	int i;

	i = 4;
	while (*field)
	{
		if (*field == (char)(x + 64) && i)
		{
			*field = '.';
			i--;
		}
		field++;
	}
	return (1);
}
