/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_left.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:14:44 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/14 16:26:45 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	left_tile_is_closed_collectible(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->map.map[y][x - 1] = collectible_open;
	g->player.pos.x--;
	display_img_in_map(g, g->textures.link[txtr_link_collect].sprite,
		x - 1, y);
	g->map.items.collectibles--;
	if (g->player.nb_lifes < 3)
		g->player.nb_lifes++;
	display_data(g);
	if (g->map.items.collectibles == 0)
		display_img_in_map(g, g->textures.items[txtr_exit_open].sprite,
			g->map.exit_pos.x, g->map.exit_pos.y);
}

void	left_tile_is_open_collectible(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->player.pos.x--;
	display_img_in_map(g, g->textures.link[txtr_link_collect].sprite, x - 1,
		y);
}

void	left_tile_is_exit(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->player.pos.x--;
	if (g->map.items.collectibles > 0)
		display_img_in_map(g, g->textures.link[txtr_link_exit].sprite, x - 1,
			y);
	else
	{
		g->end = true;
		display_win(g);
	}
}

void	left_tile_is_slime(t_game *g, int x, int y)
{
	g->press.hurt = true;
	check_tiles(g, x, y);
	g->player.pos.x--;
	g->player.nb_lifes--;
	display_data(g);
	if (g->player.nb_lifes == 0)
	{
		g->end = true;
		display_lose(g);
	}
}

void	left_tile_is_space(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->player.pos.x--;
	display_img_in_map(g, g->textures.link_idles_left[0].sprite, x - 1, y);
}
