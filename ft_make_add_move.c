/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_add_move.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 19:33:00 by istalevs          #+#    #+#             */
/*   Updated: 2018/01/08 19:33:00 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	*ft_make_add_move(size_t trm_ct)
{
	int *arr;

	if ((arr = (int*)malloc(sizeof(int) * (trm_ct + 1))) == NULL)
		return (NULL);
	(void)ft_memset(arr, 0, sizeof(int) * (trm_ct + 1));
	return (arr);
}
