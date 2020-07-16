/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_trm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 23:25:00 by istalevs          #+#    #+#             */
/*   Updated: 2017/12/29 12:38:01 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	*ft_read_trm(char const *trm_char)
{
	int		*trm_int;
	int		i;
	int		n;
	int		y;
	size_t	count;

	i = 0;
	n = 0;
	y = 0;
	count = 0;
	if ((trm_int = (int*)malloc(sizeof(int) * 8)) == NULL)
		return (NULL);
	while (i < 21)
	{
		if (*(trm_char + i) == '#')
		{
			trm_int[count++] = i - n;
			trm_int[count++] = y;
		}
		i++;
		if (i % 5 == 0 && ++y)
			n += 5;
	}
	return (trm_int);
}
