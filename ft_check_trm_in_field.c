/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_trm_in_field.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 02:32:00 by istalevs          #+#    #+#             */
/*   Updated: 2017/12/30 02:32:00 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_check_trm_in_field(const char *field, const int *trm_crd, size_t side)
{
	if (*((field + trm_crd[0]) + trm_crd[1] * side) != '.')
		return (0);
	if (*((field + trm_crd[2]) + trm_crd[3] * side) != '.')
		return (0);
	if (*((field + trm_crd[4]) + trm_crd[5] * side) != '.')
		return (0);
	if (*((field + trm_crd[6]) + trm_crd[7] * side) != '.')
		return (0);
	return (1);
}
