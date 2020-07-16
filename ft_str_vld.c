/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_vld.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 22:28:35 by mbiliaie          #+#    #+#             */
/*   Updated: 2018/01/12 15:38:11 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int	ft_box_vld(char *str)
{
	int		i;

	i = 1;
	while (*str)
	{
		str++;
		i++;
		if (*str == '\n' && (*(str + 1) == '\n' || (*(str + 1) == '\0')))
		{
			i++;
			str++;
			if (i % 21 != 0)
				return (1);
		}
	}
	return (0);
}

static int	ft_step_vld(char *str)
{
	int step;

	step = 0;
	while (*str)
	{
		while (*str == '.' || *str == '#')
		{
			step++;
			str++;
		}
		if (*str == '\n' && !(step == 4 || step == 0))
			return (1);
		str++;
		step = 0;
	}
	return (0);
}

int			ft_str_vld(char *str)
{
	size_t	len;
	int		dct;
	int		hct;

	if ((len = ft_strlen(str)) > 21 * 26)
		return (1);
	dct = 0;
	hct = 0;
	if (ft_box_vld(str) || ft_step_vld(str))
		return (1);
	if ((len + 1) % 21 != 0)
		return (1);
	while (*str)
	{
		if (*str != '.' && *str != '#' && *str != '\n')
			return (1);
		if (*str == '.')
			dct++;
		if (*str == '#')
			hct++;
		str++;
	}
	if (dct % 12 != 0 || hct % 4 != 0 || hct > dct)
		return (1);
	return (0);
}
