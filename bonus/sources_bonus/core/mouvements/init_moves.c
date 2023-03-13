/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:40:28 by twang             #+#    #+#             */
/*   Updated: 2023/03/13 17:23:00 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_left(t_game *g)
{
	int	x;
	int	y;

	x = g->player.pos.x;
	y = g->player.pos.y;
	g->press.left = true;
	if (g->map.map[y][x - 1] != wall)
	{
		g->player.nb_moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->player.nb_moves);
		display_string_moves(g);
		display_string_collectibles_left(g);
		if (g->map.map[y][x - 1] == collectible)
			left_tile_is_closed_collectible(g, x, y);
		else if (g->map.map[y][x - 1] == collectible_open)
			left_tile_is_open_collectible(g, x, y);
		else if (g->map.map[y][x - 1] == exit_game)
			left_tile_is_exit(g, x, y);
		else if (g->map.map[y][x - 1] == slime)
			left_tile_is_slime(g, x, y);
		else
			left_tile_is_space(g, x, y);
	}
}

void	move_right(t_game *g)
{
	int	x;
	int	y;

	x = g->player.pos.x;
	y = g->player.pos.y;
	g->press.right = true;
	if (g->map.map[y][x + 1] != wall)
	{
		g->player.nb_moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->player.nb_moves);
		display_string_moves(g);
		display_string_collectibles_left(g);
		if (g->map.map[y][x + 1] == collectible)
			right_tile_is_closed_collectible(g, x, y);
		else if (g->map.map[y][x + 1] == collectible_open)
			right_tile_is_open_collectible(g, x, y);
		else if (g->map.map[y][x + 1] == exit_game)
			right_tile_is_exit(g, x, y);
		else if (g->map.map[y][x + 1] == slime)
			right_tile_is_slime(g, x, y);
		else
			right_tile_is_space(g, x, y);
	}
}

void	move_down(t_game *g)
{
	int	x;
	int	y;

	x = g->player.pos.x;
	y = g->player.pos.y;
	g->press.down = true;
	if (g->map.map[y + 1][x] != wall)
	{
		g->player.nb_moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->player.nb_moves);
		display_string_moves(g);
		display_string_collectibles_left(g);
		if (g->map.map[y + 1][x] == collectible)
			down_tile_is_closed_collectible(g, x, y);
		else if (g->map.map[y + 1][x] == collectible_open)
			down_tile_is_open_collectible(g, x, y);
		else if (g->map.map[y + 1][x] == exit_game)
			down_tile_is_exit(g, x, y);
		else if (g->map.map[y + 1][x] == slime)
			down_tile_is_slime(g, x, y);
		else
			down_tile_is_space(g, x, y);
	}
}

void	move_up(t_game *g)
{
	int	x;
	int	y;

	x = g->player.pos.x;
	y = g->player.pos.y;
	g->press.up = true;
	if (g->map.map[y - 1][x] != wall)
	{
		g->player.nb_moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->player.nb_moves);
		display_string_moves(g);
		display_string_collectibles_left(g);
		if (g->map.map[y - 1][x] == collectible)
			up_tile_is_closed_collectible(g, x, y);
		else if (g->map.map[y - 1][x] == collectible_open)
			up_tile_is_open_collectible(g, x, y);
		else if (g->map.map[y - 1][x] == exit_game)
			up_tile_is_exit(g, x, y);
		else if (g->map.map[y - 1][x] == slime)
			up_tile_is_slime(g, x, y);
		else
			up_tile_is_space(g, x, y);
	}
}
