/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_down.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:14:49 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/08 20:25:25 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	down_tile_is_closed_collectible(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->map.map[i + 1][j] = collectible_open;
	g->player.pos.y++;
	display_image(g, g->textures.link[txtr_link_collect].sprite, i + 1, j);
	g->map.items.collectibles--;
	if (g->map.items.collectibles == 0)
		display_image(g, g->textures.items[txtr_exit_open].sprite, \
		g->map.exit_pos.y, g->map.exit_pos.x);
}

static void	down_tile_is_open_collectible(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->player.pos.y++;
	display_image(g, g->textures.link[txtr_link_collect].sprite, i + 1, j);
}

static void	down_tile_is_exit(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->player.pos.y++;
	if (g->map.items.collectibles > 0)
		display_image(g, g->textures.link[txtr_link_exit].sprite, i + 1, j);
	else
	{
		g->end = true;
		display_win(g);
	}
}

static void	down_tile_is_space(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->player.pos.y++;
	display_image(g, g->textures.link[txtr_link].sprite, i + 1, j);
}

void	move_down(t_game *g)
{
	int	i;
	int	j;

	i = g->player.pos.y;
	j = g->player.pos.x;
	if (g->map.map[i + 1][j] != wall)
	{
		g->player.nb_moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->player.nb_moves);
		if (g->map.map[i + 1][j] == collectible)
			down_tile_is_closed_collectible(g, i, j);
		else if (g->map.map[i + 1][j] == collectible_open)
			down_tile_is_open_collectible(g, i, j);
		else if (g->map.map[i + 1][j] == exit_game)
			down_tile_is_exit(g, i, j);
		else
			down_tile_is_space(g, i, j);
	}
}
