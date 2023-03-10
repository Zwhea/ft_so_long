/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:14:33 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/09 19:45:55 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	up_tile_is_closed_collectible(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->map.map[y - 1][x] = collectible_open;
	g->player.pos.y--;
	display_image_in_map(g, g->textures.link[txtr_link_collect].sprite, x,
		y - 1);
	g->map.items.collectibles--;
	if (g->map.items.collectibles == 0)
		display_image_in_map(g, g->textures.items[txtr_exit_open].sprite, \
		g->map.exit_pos.x, g->map.exit_pos.y);
}

static void	up_tile_is_open_collectible(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->player.pos.y--;
	display_image_in_map(g, g->textures.link[txtr_link_collect].sprite, x,
		y - 1);
}

static void	up_tile_is_exit(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->player.pos.y--;
	if (g->map.items.collectibles > 0)
		display_image_in_map(g, g->textures.link[txtr_link_exit].sprite, x,
			y - 1);
	else
	{
		g->end = true;
		display_win(g);
	}
}

static void	up_tile_is_space(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->player.pos.y--;
	display_image_in_map(g, g->textures.link[txtr_link_back].sprite, x, y - 1);
}

void	move_up(t_game *g)
{
	int	x;
	int	y;

	x = g->player.pos.x;
	y = g->player.pos.y;
	if (g->map.map[y - 1][x] != wall)
	{
		g->player.nb_moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->player.nb_moves);
		if (g->map.map[y - 1][x] == collectible)
			up_tile_is_closed_collectible(g, x, y);
		else if (g->map.map[y - 1][x] == collectible_open)
			up_tile_is_open_collectible(g, x, y);
		else if (g->map.map[y - 1][x] == exit_game)
			up_tile_is_exit(g, x, y);
		else
			up_tile_is_space(g, x, y);
	}
}
