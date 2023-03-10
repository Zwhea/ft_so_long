/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:12:47 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/08 19:12:50 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	init_xpm_border_walls(t_game *g)
{
	g->textures.walls[txtr_b_bot_left].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_B_BOT_LEFT, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_b_bot_right].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_B_BOT_RIGHT, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_b_left].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_B_LEFT, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_b_left_extr].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_B_LEFT_EXTR, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_b_left_s].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_B_LEFT_S, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_b_right].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_B_RIGHT, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_b_right_extr].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_B_RIGHT_EXTR, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_b_top_left].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_B_TOP_LEFT, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_b_top_right].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_B_TOP_RIGHT, &g->textures.size.x, &g->textures.size.y);
}

static void	init_xpm_middle_walls(t_game *g)
{
	g->textures.walls[txtr_mid_bot].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_MID_BOT, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_mid_left].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_MID_LEFT, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_mid_right].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_MID_RIGHT, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_mid_top].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_MID_TOP, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_i_mid_cross].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_I_MID_CROSS, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_i_mid_left].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_I_MID_LEFT, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_i_mid_right].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_I_MID_RIGHT, &g->textures.size.x, &g->textures.size.y);
}

static void	init_xpm_inside_walls(t_game *g)
{
	g->textures.walls[txtr_i_bot_extr].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_I_BOT_EXTR, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_i_bot_left].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_I_BOT_LEFT, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_i_bot_right].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_I_BOT_RIGHT, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_i_top_extr].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_I_TOP_EXTR, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_i_top_left].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_I_TOP_LEFT, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_i_top_right].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_I_TOP_RIGHT, &g->textures.size.x, &g->textures.size.y);
}

void	init_xpm_walls(t_game *g)
{
	init_xpm_border_walls(g);
	init_xpm_middle_walls(g);
	init_xpm_inside_walls(g);
	g->textures.walls[txtr_in_wall].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_IN_WALL, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_left_extr].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LEFT_EXTR, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_right_extr].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_RIGHT_EXTR, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_wall].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_WALL, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_right_s].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_B_RIGHT_S, &g->textures.size.x, &g->textures.size.y);
	g->textures.walls[txtr_column].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_COLUMN, &g->textures.size.x, &g->textures.size.y);
}
