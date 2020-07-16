/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 19:56:00 by istalevs          #+#    #+#             */
/*   Updated: 2018/01/08 19:56:00 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_add_move(int *add, size_t count, size_t field_len, size_t trm_ct)
{
	if ((size_t)add[count] < field_len)
		add[count] += 1;
	while (count++ < trm_ct)
	{
		add[count] = 0;
	}
}
