/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   items.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:13:01 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/14 16:28:08 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_xpm_items(t_game *g)
{
	g->textures.items[txtr_grass].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_GRASS, &g->textures.size.x, &g->textures.size.y);
	g->textures.items[txtr_collectible].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_COLLECTIBLE, &g->textures.size.x, &g->textures.size.y);
	g->textures.items[txtr_collectible_open].sprite = mlx_xpm_file_to_image(\
	g->mlx, XPM_COLLECTIBLE_OPEN, &g->textures.size.x, &g->textures.size.y);
	g->textures.items[txtr_exit].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_EXIT, &g->textures.size.x, &g->textures.size.y);
	g->textures.items[txtr_exit_open].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_EXIT_OPEN, &g->textures.size.x, &g->textures.size.y);
	g->textures.items[txtr_won].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_WIN, &g->textures.size.x, &g->textures.size.y);
	g->textures.items[txtr_lose].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LOSE, &g->textures.size.x, &g->textures.size.y);
	g->textures.items[txtr_one_heart].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_ONE_HEART, &g->textures.size.x, &g->textures.size.y);
	g->textures.items[txtr_two_hearts].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_TWO_HEARTS, &g->textures.size.x, &g->textures.size.y);
	g->textures.items[txtr_full_hearts].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_FULL_HEARTS, &g->textures.size.x, &g->textures.size.y);
}
