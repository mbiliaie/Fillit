/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trm_ct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiliaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 22:34:44 by mbiliaie          #+#    #+#             */
/*   Updated: 2018/01/11 22:34:48 by mbiliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t	ft_trm_ct(char *str)
{
	size_t trm_num;
	size_t hct;

	hct = 0;
	while (*str)
	{
		if (*str == '#')
			hct++;
		str++;
	}
	trm_num = hct / 4;
	return (trm_num);
}
