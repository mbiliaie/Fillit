/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_field_mk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 18:17:00 by istalevs          #+#    #+#             */
/*   Updated: 2017/12/29 12:32:48 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int		*ft_field_calculator(size_t trm_num, int sq_ct)
{
	static int	result[2];
	int			ect;
	int			size;

	size = (int)trm_num * 4;
	if (ft_sqrt(size) != 0 && sq_ct > 0)
		size--;
	if (sq_ct > 0)
		while (ft_sqrt(size) == 0)
		{
			size++;
			if (ft_sqrt(size) != 0 && sq_ct > 0)
			{
				size++;
				sq_ct--;
			}
		}
	else
		while (ft_sqrt(size) == 0)
			size++;
	ect = ft_sqrt(size);
	size += ect;
	result[0] = size;
	result[1] = ect;
	return (result);
}

char			*field_mk(size_t trm_num, int sq_ct)
{
	size_t		size;
	char		*field_str;
	int			*result;
	int			ect;
	int			i;

	i = 1;
	result = ft_field_calculator(trm_num, sq_ct);
	size = (size_t)result[0];
	ect = result[1];
	if ((field_str = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	ft_memset(field_str, '\0', size + 1);
	ft_memset(field_str, '.', size);
	while (*field_str)
	{
		if (ect == i - 1)
		{
			*field_str = '\n';
			i = 0;
		}
		field_str++;
		i++;
	}
	return (field_str - size);
}
