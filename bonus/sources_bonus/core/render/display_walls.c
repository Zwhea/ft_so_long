/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_walls.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:14:12 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/08 20:40:01 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	display_midwalls(t_game *g, int x, int y)
{
	if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] != wall && g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] == wall)
		display_image_in_map(g, g->textures.walls[txtr_mid_top].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] == wall && g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] == wall)
		display_image_in_map(g, g->textures.walls[txtr_mid_bot].sprite, x, y);
	else if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] == wall && g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] == wall)
		display_image_in_map(g, g->textures.walls[txtr_i_mid_cross].sprite, x, y);
	else
		display_image_in_map(g, g->textures.walls[txtr_wall].sprite, x, y);
}

static void	display_specwalls(t_game *g, int x, int y)
{
	if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] != wall && g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] != wall)
		display_image_in_map(g, g->textures.walls[txtr_i_bot_extr].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] != wall && g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] == wall)
		display_image_in_map(g, g->textures.walls[txtr_left_extr].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] != wall && g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] != wall)
		display_image_in_map(g, g->textures.walls[txtr_right_extr].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] == wall && g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] != wall)
		display_image_in_map(g, g->textures.walls[txtr_i_bot_left].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] == wall && g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] == wall)
		display_image_in_map(g, g->textures.walls[txtr_i_bot_right].sprite, x, y);
	else if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] == wall && g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] != wall)
		display_image_in_map(g, g->textures.walls[txtr_i_mid_left].sprite, x, y);
	else if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] == wall && g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] == wall)
		display_image_in_map(g, g->textures.walls[txtr_i_mid_right].sprite, x, y);
	else
		display_midwalls(g, x, y);
}

static void	display_inwalls(t_game *g, int x, int y)
{
	if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] != wall && g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] != wall)
		display_image_in_map(g, g->textures.walls[txtr_column].sprite, x, y);
	else if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] != wall && g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] != wall)
		display_image_in_map(g, g->textures.walls[txtr_i_top_left].sprite, x, y);
	else if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] != wall && g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] == wall)
		display_image_in_map(g, g->textures.walls[txtr_i_top_right].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] == wall && g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] != wall)
		display_image_in_map(g, g->textures.walls[txtr_i_bot_left].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] == wall && g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] == wall)
		display_image_in_map(g, g->textures.walls[txtr_i_bot_right].sprite, x, y);
	else if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] == wall && g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] != wall)
		display_image_in_map(g, g->textures.walls[txtr_in_wall].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] == wall && g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] != wall)
		display_image_in_map(g, g->textures.walls[txtr_i_top_extr].sprite, x, y);
	else
		display_specwalls(g, x, y);
}

static void	display_borders(t_game *g, int x, int y)
{
	if (y != 0 && y != g->map.size.y - 1 && x == 0 && x != g->map.size.x - 1 && g->map.map[y][x + 1] == wall)
		display_image_in_map(g, g->textures.walls[txtr_mid_left].sprite, x, y);
	else if (y != 0 && y != g->map.size.y - 1 && x != 0 && x == g->map.size.x - 1 && g->map.map[y][x - 1] == wall)
		display_image_in_map(g, g->textures.walls[txtr_mid_right].sprite, x, y);
	else if (y != 0 && y != g->map.size.y - 1 && (x == 0 || x == g->map.size.x - 1))
	{
		if (x == g->map.size.x - 1 && y % 2 == 0)
			display_image_in_map(g, g->textures.walls[txtr_right_s].sprite, x, y);
		else if (x == 0 && y % 3 == 0)
			display_image_in_map(g, g->textures.walls[txtr_b_left_s].sprite, x, y);
		else
		{
			if (x == 0)
				display_image_in_map(g, g->textures.walls[txtr_b_left].sprite, x, y);
			else
				display_image_in_map(g, g->textures.walls[txtr_b_right].sprite, x, y);
		}
	}
	else if (y != 0 && y != g->map.size.y - 1 && x != g->map.size.x - 1 && x != 0)
		display_inwalls(g, x, y);
	else
		display_image_in_map(g, g->textures.walls[txtr_wall].sprite, x, y);
}

void	display_walls(t_game *g, int x, int y)
{
	if (x == 0 && y == 0)
		display_image_in_map(g, g->textures.walls[txtr_b_top_left].sprite, x, y);
	else if (y == 0 && x == g->map.size.x - 1)
		display_image_in_map(g, g->textures.walls[txtr_b_top_right].sprite, x, y);
	else if (y == g->map.size.y - 1 && x == 0)
		display_image_in_map(g, g->textures.walls[txtr_b_bot_left].sprite, x, y);
	else if (y == g->map.size.y - 1 && x == g->map.size.x - 1)
		display_image_in_map(g, g->textures.walls[txtr_b_bot_right].sprite, x, y);
	else if (y != 0 && y == g->map.size.y - 1 && x != g->map.size.x - 1 && g->map.map[y - 1][x] == wall)
		display_image_in_map(g, g->textures.walls[txtr_mid_bot].sprite, x, y);
	else if (y == 0 && y != g->map.size.y - 1 && x != g->map.size.x - 1 && g->map.map[y + 1][x] == wall)
		display_image_in_map(g, g->textures.walls[txtr_mid_top].sprite, x, y);
	else
		display_borders(g, x, y);
}
