/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:14:21 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/10 20:48:03 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_map(t_game *g)
{
	int	x;
	int	y;

	y = -1;
	while (++y < g->map.size.y)
	{
		x = -1;
		while (++x < g->map.size.x)
		{
			if (g->map.map[y][x] == collectible)
				display_image_in_map(g, \
				g->textures.items[txtr_collectible].sprite, x, y);
			else if (g->map.map[y][x] == exit_game)
				display_image_in_map(g, \
				g->textures.items[txtr_exit].sprite, x, y);
			else if (g->map.map[y][x] == player)
				display_image_in_map(g, \
				g->textures.link_idles[0].sprite, x, y);
			else if (g->map.map[y][x] == slime)
				display_image_in_map(g, g->textures.slime[0].sprite, x, y);
			else if (g->map.map[y][x] == wall)
				display_walls(g, x, y);
		}
	}
}
