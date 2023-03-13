/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:12:14 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/13 17:30:36 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_tiles(t_game *g, int x, int y)
{
	if (g->map.map[y][x] == collectible_open)
		display_image_in_map(g, g->textures.items[txtr_collectible_open].sprite,
			x, y);
	else if (g->map.map[y][x] == exit_game)
		display_image_in_map(g, g->textures.items[txtr_exit].sprite, x, y);
	else
		display_image_in_map(g, g->textures.items[txtr_grass].sprite, x, y);
}

void	set_vec2i(t_vec2i *vector, int x, int y)
{
	vector->x = x;
	vector->y = y;
}

bool	is_valid_char(char c)
{
	if (c == space || c == wall || c == collectible || c == exit_game \
		|| c == player)
		return (true);
	return (false);
}

static void	set_number_of_items(t_game *g, char c)
{
	if (c == player)
		g->map.items.players++;
	else if (c == collectible)
		g->map.items.collectibles++;
	else if (c == exit_game)
		g->map.items.exits++;
	else if (is_valid_char(c) == false)
		g->map.items.invalid_characters++;
}

void	fill_map_items(t_game *g)
{
	int	x;
	int	y;

	y = 0;
	while (y < g->map.size.y)
	{
		x = 0;
		while (x < g->map.size.x)
		{
			set_number_of_items(g, g->map.map[y][x]);
			if (g->map.map[y][x] == player)
				set_vec2i(&g->player.pos, x, y);
			else if (g->map.map[y][x] == exit_game)
				set_vec2i(&g->map.exit_pos, x, y);
			x++;
		}
		y++;
	}
}
