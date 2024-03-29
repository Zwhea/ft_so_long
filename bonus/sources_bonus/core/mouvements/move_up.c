/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:14:33 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/14 16:27:37 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	up_tile_is_closed_collectible(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->map.map[y - 1][x] = collectible_open;
	g->player.pos.y--;
	display_img_in_map(g, g->textures.link[txtr_link_collect].sprite, x,
		y - 1);
	g->map.items.collectibles--;
	if (g->player.nb_lifes < 3)
		g->player.nb_lifes++;
	display_data(g);
	if (g->map.items.collectibles == 0)
		display_img_in_map(g, g->textures.items[txtr_exit_open].sprite, \
		g->map.exit_pos.x, g->map.exit_pos.y);
}

void	up_tile_is_open_collectible(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->player.pos.y--;
	display_img_in_map(g, g->textures.link[txtr_link_collect].sprite, x,
		y - 1);
}

void	up_tile_is_exit(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->player.pos.y--;
	if (g->map.items.collectibles > 0)
		display_img_in_map(g, g->textures.link[txtr_link_exit].sprite, x,
			y - 1);
	else
	{
		g->end = true;
		display_win(g);
	}
}

void	up_tile_is_slime(t_game *g, int x, int y)
{
	g->press.hurt = true;
	check_tiles(g, x, y);
	g->player.pos.y--;
	g->player.nb_lifes--;
	display_data(g);
	if (g->player.nb_lifes == 0)
	{
		g->end = true;
		display_lose(g);
	}
}

void	up_tile_is_space(t_game *g, int x, int y)
{
	check_tiles(g, x, y);
	g->player.pos.y--;
	display_img_in_map(g, g->textures.link[txtr_link_back].sprite, x, y - 1);
}
