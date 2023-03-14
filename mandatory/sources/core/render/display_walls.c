/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_walls.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:14:12 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/14 16:51:04 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	display_midwalls(t_game *g, int x, int y)
{
	if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] != wall && \
	g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] == wall)
		display_img_in_map(g, g->textures.walls[mid_top].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] == wall && \
	g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] == wall)
		display_img_in_map(g, g->textures.walls[mid_bot].sprite, x, y);
	else if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] == wall && \
	g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] == wall)
		display_img_in_map(g, g->textures.walls[i_mid_cross].sprite, x, y);
	else
		display_img_in_map(g, g->textures.walls[walls].sprite, x, y);
}

static void	display_specwalls(t_game *g, int x, int y)
{
	if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] != wall && \
	g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] != wall)
		display_img_in_map(g, g->textures.walls[i_bot_extr].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] != wall && \
	g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] == wall)
		display_img_in_map(g, g->textures.walls[left_extr].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] != wall && \
	g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] != wall)
		display_img_in_map(g, g->textures.walls[right_extr].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] == wall && \
	g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] != wall)
		display_img_in_map(g, g->textures.walls[i_bot_left].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] == wall && \
	g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] == wall)
		display_img_in_map(g, g->textures.walls[i_bot_right].sprite, x, y);
	else if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] == wall && \
	g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] != wall)
		display_img_in_map(g, g->textures.walls[i_mid_left].sprite, x, y);
	else if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] == wall && \
	g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] == wall)
		display_img_in_map(g, g->textures.walls[i_mid_right].sprite, x, y);
	else
		display_midwalls(g, x, y);
}

static void	display_inwalls(t_game *g, int x, int y)
{
	if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] != wall && \
	g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] != wall)
		display_img_in_map(g, g->textures.walls[column].sprite, x, y);
	else if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] != wall && \
	g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] != wall)
		display_img_in_map(g, g->textures.walls[i_top_left].sprite, x, y);
	else if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] != wall && \
	g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] == wall)
		display_img_in_map(g, g->textures.walls[i_top_right].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] == wall && \
	g->map.map[y][x + 1] == wall && g->map.map[y][x - 1] != wall)
		display_img_in_map(g, g->textures.walls[i_bot_left].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] == wall && \
	g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] == wall)
		display_img_in_map(g, g->textures.walls[i_bot_right].sprite, x, y);
	else if (g->map.map[y + 1][x] == wall && g->map.map[y - 1][x] == wall && \
	g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] != wall)
		display_img_in_map(g, g->textures.walls[in_wall].sprite, x, y);
	else if (g->map.map[y + 1][x] != wall && g->map.map[y - 1][x] == wall && \
	g->map.map[y][x + 1] != wall && g->map.map[y][x - 1] != wall)
		display_img_in_map(g, g->textures.walls[i_top_extr].sprite, x, y);
	else
		display_specwalls(g, x, y);
}

static void	display_borders(t_game *g, int x, int y)
{
	if (y != 0 && y != g->map.size.y - 1 && x != 0 && \
	x == g->map.size.x - 1 && g->map.map[y][x - 1] == wall)
		display_img_in_map(g, g->textures.walls[mid_right].sprite, x, y);
	else if (y != 0 && y != g->map.size.y - 1 && \
		(x == 0 || x == g->map.size.x - 1))
	{
		if (x == g->map.size.x - 1 && y % 2 == 0)
			display_img_in_map(g, g->textures.walls[right_s].sprite, x, y);
		else if (x == 0 && y % 3 == 0)
			display_img_in_map(g, g->textures.walls[b_left_s].sprite, x, y);
		else
		{
			if (x == 0)
				display_img_in_map(g, g->textures.walls[b_left].sprite, x, y);
			else
				display_img_in_map(g, g->textures.walls[b_right].sprite, x, y);
		}
	}
	else if (y != 0 && y != g->map.size.y - 1 && x != g->map.size.x - 1 && \
	x != 0)
		display_inwalls(g, x, y);
	else
		display_img_in_map(g, g->textures.walls[walls].sprite, x, y);
}

void	display_walls(t_game *g, int x, int y)
{
	if (x == 0 && y == 0)
		display_img_in_map(g, g->textures.walls[b_top_left].sprite, x, y);
	else if (y == 0 && x == g->map.size.x - 1)
		display_img_in_map(g, g->textures.walls[b_top_right].sprite, x, y);
	else if (y == g->map.size.y - 1 && x == 0)
		display_img_in_map(g, g->textures.walls[b_bot_left].sprite, x, y);
	else if (y == g->map.size.y - 1 && x == g->map.size.x - 1)
		display_img_in_map(g, g->textures.walls[b_bot_right].sprite, x, y);
	else if (y != 0 && y == g->map.size.y - 1 && x != g->map.size.x - 1 && \
	g->map.map[y - 1][x] == wall)
		display_img_in_map(g, g->textures.walls[mid_bot].sprite, x, y);
	else if (y == 0 && y != g->map.size.y - 1 && x != g->map.size.x - 1 && \
	g->map.map[y + 1][x] == wall)
		display_img_in_map(g, g->textures.walls[mid_top].sprite, x, y);
	else
	{
		if (y != 0 && y != g->map.size.y - 1 && x == 0 && \
		x != g->map.size.x - 1 && g->map.map[y][x + 1] == wall)
			display_img_in_map(g, g->textures.walls[mid_left].sprite, x, y);
		else
			display_borders(g, x, y);
	}
}
