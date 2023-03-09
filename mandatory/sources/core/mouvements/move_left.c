/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_left.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:14:44 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/09 14:38:05 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// void	left_tile_is_closed_collect(t_game *g, int i, int j)
// {
// 	check_tiles(g, i, j);
// 	g->map.map[i - 1][j] = collectible_open;
// 	g->player.pos.y--;
// 	display_image(g, g->textures.link[txtr_link_collect].sprite, i - 1, j);
// 	g->map.items.collectibles--;
// 	if (g->map.items.collectibles == 0)
// 		display_image(g, g->textures.items[txtr_exit_open].sprite, g->map.exit_pos.y,
// 			g->map.exit_pos.x);
// }

// void	left_tile_is_open_collect(t_game *g, int i, int j)
// {
// 	check_tiles(g, i, j);
// 	g->player.pos.y--;
// 	display_image(g, g->textures.link[txtr_link_collect].sprite, i - 1, j);
// }

// void	left_tile_is_exit(t_game *g, int i, int j)
// {
// 	check_tiles(g, i, j);
// 	g->player.pos.y--;
// 	if (g->map.items.collectibles > 0)
// 		display_image(g, g->textures.link[txtr_link_exit].sprite, i - 1, j);
// 	else
// 	{
// 		g->end = true;
// 		display_win(g);
// 	}
// }

void	left_tile_is_space(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->player.pos.y--;
	display_image(g, g->textures.link[txtr_link_left].sprite, j, i - 1);
}

void	move_left(t_game *g)
{
	int	i;
	int	j;

	i = g->player.pos.y;
	j = g->player.pos.x;
	// g->directions.left = true;
	if (g->map.map[i - 1][j] != wall)
	{
		g->player.nb_moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->player.nb_moves);
		// if (g->map.map[i - 1][j] == collectible)
		// 	left_tile_is_closed_collect(g, i, j);
		// else if (g->map.map[i - 1][j] == collectible_open)
		// 	left_tile_is_open_collect(g, i, j);
		// else if (g->map.map[i - 1][j] == exit_game)
		// 	left_tile_is_exit(g, i, j);
		// else
			left_tile_is_space(g, i, j);
	}
}
