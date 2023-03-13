/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:13:46 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/13 17:30:19 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	read_error(int fd)
{
	perror("read");
	close(fd);
	exit(2);
}

static int	get_allocation_size(t_game *g, const char *file)
{
	int	size;
	int	fd;
	int	nb_bytes_read;
	int	c;

	fd = open_file(file);
	nb_bytes_read = 1;
	size = 0;
	g->map.size.y = 1;
	while (nb_bytes_read > 0)
	{
		nb_bytes_read = read(fd, &c, 1);
		if (nb_bytes_read == -1)
			read_error(fd);
		if (c == '\n')
			g->map.size.y++;
		size++;
	}
	close(fd);
	return (size);
}

static char	*fill_map(t_game *g, const char *file)
{
	int		i;
	int		fd;
	int		nb_bytes_read;
	int		c;
	char	*str;

	str = ft_calloc(get_allocation_size(g, file) + 1, sizeof(char));
	if (!str)
		exit(3);
	fd = open_file(file);
	i = 0;
	nb_bytes_read = 1;
	while (nb_bytes_read > 0)
	{
		nb_bytes_read = read(fd, &c, 1);
		if (nb_bytes_read == -1)
			read_error(fd);
		if (nb_bytes_read != 0)
			str[i] = c;
		i++;
	}
	close(fd);
	return (str);
}

void	get_map(t_game *g, const char *file)
{
	char	*tmp;

	tmp = fill_map(g, file);
	g->map.map = ft_split(tmp, '\n');
	if (!g->map.map)
	{
		free(tmp);
		exit(3);
	}
	g->map.map_tmp = ft_split(tmp, '\n');
	if (!g->map.map_tmp)
	{
		free(tmp);
		ft_free((void **) g->map.map, g->map.size.y);
		exit(3);
	}
	free(tmp);
}
