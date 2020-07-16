/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_last_trm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istalevs <istalevs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 16:13:00 by istalevs          #+#    #+#             */
/*   Updated: 2017/12/29 12:28:40 by istalevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_del_last_trm(char *str, int ch)
{
	int count;

	count = 0;
	while (*str && count != 4)
	{
		if (*str == (unsigned char)ch)
		{
			*str = '.';
			count++;
		}
		str++;
	}
}
