/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiliaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 22:25:07 by mbiliaie          #+#    #+#             */
/*   Updated: 2018/01/11 22:25:13 by mbiliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_reader(char **ar)
{
	size_t	tmp;
	size_t	i;
	char	*input;
	int		fd;
	char	buff;

	tmp = 0;
	i = 0;
	fd = open(ar[1], O_RDONLY);
	if (fd < 0)
		return (NULL);
	while (read(fd, &buff, 1))
		tmp++;
	if ((input = (char*)malloc(sizeof(char) * tmp + 1)) == NULL)
		return (0);
	(void)ft_memset((void*)input, '\0', sizeof(char) * tmp + 1);
	close(fd);
	fd = open(ar[1], O_RDONLY);
	while (read(fd, &buff, 1))
		*(input + i++) = buff;
	close(fd);
	return (input);
}
