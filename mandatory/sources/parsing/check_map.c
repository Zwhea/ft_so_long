/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:13:51 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/15 14:06:39 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	check_map_size_and_format(t_game *g)
{
	int	i;
	int	size;

	i = 0;
	while (i < g->map.size.y)
	{
		size = ft_strlen(g->map.map[i]);
		if (g->map.size.x != size)
		{
			display_map_format_error(g, bad_format);
			clean_map(g);
		}
		i++;
	}
	if (g->map.size.y < 3 || g->map.size.x < 5)
		display_map_format_error(g, bad_size);
}

static void	check_map_items(t_game *g)
{
	fill_map_items(g);
	if (g->map.items.players < 1)
		display_map_item_error(g, no_player);
	if (g->map.items.players > 1)
		display_map_item_error(g, too_much_player);
	if (g->map.items.collectibles < 1)
		display_map_item_error(g, no_collectible);
	if (g->map.items.exits < 1)
		display_map_item_error(g, no_exit);
	if (g->map.items.exits > 1)
		display_map_item_error(g, too_much_exit);
	if (g->map.items.invalid_characters != 0)
		display_map_item_error(g, bad_char);
}

static void	check_map_border(t_game *g)
{
	int	i;

	i = 0;
	while (i < g->map.size.x)
	{
		if (g->map.map[0][i] != wall)
			display_map_wall_error(g, top_border);
		if (g->map.map[g->map.size.y - 1][i] != wall)
			display_map_wall_error(g, bottom_border);
		i++;
	}
	i = 0;
	while (i < g->map.size.y)
	{
		if (g->map.map[i][0] != wall)
			display_map_wall_error(g, left_border);
		if (g->map.map[i][g->map.size.x - 1] != wall)
			display_map_wall_error(g, right_border);
		i++;
	}
}

static void	check_solvability(t_game *g)
{
	int	x;
	int	y;

	if (g->map.error.is_valid == false)
		display_map_unsolvable_error(g);
	x = g->player.pos.x;
	y = g->player.pos.y;
	backtracking(g, x, y);
	y = 0;
	while (y < g->map.size.y)
	{
		x = 0;
		while (x < g->map.size.x)
		{
			if (g->map.map_tmp[y][x] == exit_game \
				|| g->map.map_tmp[y][x] == collectible)
				display_map_unsolvable_error(g);
			x++;
		}
		y++;
	}
	ft_free((void **) g->map.map_tmp, g->map.size.y);
}

void	check_map(t_game *g)
{
	g->map.size.x = ft_strlen(g->map.map[0]);
	if (g->map.size.y == 1 || g->map.size.x < 1)
	{
		display_map_format_error(g, no_map);
		clean_map(g);
	}
	check_map_size_and_format(g);
	check_map_items(g);
	check_map_border(g);
	check_solvability(g);
}
