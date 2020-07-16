/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trm_vld.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 10:23:00 by istalevs          #+#    #+#             */
/*   Updated: 2017/12/29 12:36:47 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int	ft_trm_counter(int i, int count, int trm_box, char const *s)
{
	while (*(s + i + trm_box))
	{
		if (*(s + i + trm_box) == '#')
		{
			if (*(s + i + trm_box + 1) == '#')
				count++;
			if (*(s + i + trm_box - 1) == '#')
				count++;
			if (*(s + i + trm_box - 5) == '#' && i >= 5)
				count++;
			if (*(s + i + trm_box + 5) == '#' && i <= 15)
				count++;
		}
		if (i == 19 && (count == 6 || count == 8))
		{
			i = -1;
			count = 0;
			trm_box += 21;
		}
		else if (i == 19 && (count < 6 || count == 7 || count > 8))
			return (1);
		i++;
	}
	return (0);
}

int			ft_trm_vld(char const *s)
{
	int i;
	int count;
	int trm_box;

	i = 0;
	count = 0;
	trm_box = 0;
	if (ft_trm_counter(i, count, trm_box, s))
		return (1);
	return (0);
}
