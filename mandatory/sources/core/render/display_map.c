/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:14:21 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/14 16:54:44 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_map(t_game *g)
{
	int	x;
	int	y;

	y = 0;
	while (y < g->map.size.y)
	{
		x = 0;
		while (x < g->map.size.x)
		{
			if (g->map.map[y][x] == collectible)
				display_img_in_map(g, \
				g->textures.items[txtr_collectible].sprite, x, y);
			else if (g->map.map[y][x] == exit_game)
				display_img_in_map(g, \
				g->textures.items[txtr_exit].sprite, x, y);
			else if (g->map.map[y][x] == player)
				display_img_in_map(g, \
				g->textures.link[txtr_link].sprite, x, y);
			else if (g->map.map[y][x] == wall)
				display_walls(g, x, y);
			x++;
		}
		y++;
	}
}
