/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_left.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:14:44 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/08 21:40:20 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	left_tile_is_closed_collectible(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->map.map[i][j - 1] = collectible_open;
	g->player.pos.x--;
	display_image(g, g->textures.link[txtr_link_collect].sprite, i, j - 1);
	g->map.items.collectibles--;
	if (g->map.items.collectibles == 0)
		display_image(g, g->textures.items[txtr_exit_open].sprite, \
		g->map.exit_pos.y, g->map.exit_pos.x);
}

static void	left_tile_is_open_collectible(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->player.pos.x--;
	display_image(g, g->textures.link[txtr_link_collect].sprite, i, j - 1);
}

static void	left_tile_is_exit(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->player.pos.x--;
	if (g->map.items.collectibles > 0)
		display_image(g, g->textures.link[txtr_link_exit].sprite, i, j - 1);
	else
	{
		g->end = true;
		display_win(g);
	}
}

static void	left_tile_is_space(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->player.pos.x--;
	display_image(g, g->textures.link[txtr_link_left].sprite, i, j - 1);
}

void	move_left(t_game *g)
{
	int	i;
	int	j;

	i = g->player.pos.x;
	j = g->player.pos.y;
	if (g->map.map[i][j - 1] != wall)
	{
		g->player.nb_moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->player.nb_moves);
		if (g->map.map[i][j - 1] == collectible)
			left_tile_is_closed_collectible(g, i, j);
		else if (g->map.map[i][j - 1] == collectible_open)
			left_tile_is_open_collectible(g, i, j);
		else if (g->map.map[i][j - 1] == exit_game)
			left_tile_is_exit(g, i, j);
		else
			left_tile_is_space(g, i, j);
	}
}
