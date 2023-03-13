/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:14:39 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/13 17:32:26 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	right_tile_is_closed_collectible(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->map.map[y][x + 1] = collectible_open;
	g->player.pos.x++;
	display_image_in_map(g, g->textures.link[txtr_link_collect].sprite,
		x + 1, y);
	g->map.items.collectibles--;
	if (g->map.items.collectibles == 0)
		display_image_in_map(g, g->textures.items[txtr_exit_open].sprite,
			g->map.exit_pos.x, g->map.exit_pos.y);
}

static void	right_tile_is_open_collectible(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->player.pos.x++;
	display_image_in_map(g, g->textures.link[txtr_link_collect].sprite, x + 1,
		y);
}

static void	right_tile_is_exit(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->player.pos.x++;
	if (g->map.items.collectibles > 0)
		display_image_in_map(g, g->textures.link[txtr_link_exit].sprite, x + 1,
			y);
	else
	{
		g->end = true;
		display_win(g);
	}
}

static void	right_tile_is_space(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->player.pos.x++;
	display_image_in_map(g, g->textures.link[txtr_link_right].sprite, x + 1, y);
}

void	move_right(t_game *g)
{
	int	x;
	int	y;

	x = g->player.pos.x;
	y = g->player.pos.y;
	if (g->map.map[y][x + 1] != wall)
	{
		g->player.nb_moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->player.nb_moves);
		if (g->map.map[y][x + 1] == collectible)
			right_tile_is_closed_collectible(g, x, y);
		else if (g->map.map[y][x + 1] == collectible_open)
			right_tile_is_open_collectible(g, x, y);
		else if (g->map.map[y][x + 1] == exit_game)
			right_tile_is_exit(g, x, y);
		else
			right_tile_is_space(g, x, y);
	}
}
