/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_filler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiliaie <mbiliaie@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 17:51:00 by mbiliaie          #+#    #+#             */
/*   Updated: 2017/12/29 17:51:00 by mbiliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	**ft_trm_mk_mv(char *input, size_t trm_ct)
{
	int		**trm_coordinates;
	size_t	j;
	size_t	count;

	trm_coordinates = ft_arr_mk(trm_ct);
	j = 0;
	count = 0;
	if ((trm_coordinates[count] = (int*)malloc(sizeof(int))) == NULL)
		return (NULL);
	trm_coordinates[count++][j] = (int)trm_ct;
	while (count < trm_ct + 1 && input[j] != '\0')
	{
		if (j == 0 || j % 21 == 0)
		{
			trm_coordinates[count] = ft_read_trm(input + j);
			ft_first_move(trm_coordinates[count]);
			count++;
		}
		j++;
	}
	free(input);
	return (trm_coordinates);
}
