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

void	ft_trm_in_field(char *field, const int *trm_crd, int x, size_t side)
{
	*((field + trm_crd[0]) + trm_crd[1] * side) = (char)(x + 64);
	*((field + trm_crd[2]) + trm_crd[3] * side) = (char)(x + 64);
	*((field + trm_crd[4]) + trm_crd[5] * side) = (char)(x + 64);
	*((field + trm_crd[6]) + trm_crd[7] * side) = (char)(x + 64);
}
