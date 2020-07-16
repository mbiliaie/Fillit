/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_mk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 20:18:00 by istalevs          #+#    #+#             */
/*   Updated: 2017/12/29 12:07:06 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	**ft_arr_mk(size_t trm_ct)
{
	int		**trm;

	if ((trm = (int**)malloc(sizeof(int*) * trm_ct + 1)) == NULL)
		return (NULL);
	ft_memset(trm, 0, trm_ct);
	return (trm);
}
