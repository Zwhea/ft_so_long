/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_idles.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:15:39 by twang             #+#    #+#             */
/*   Updated: 2023/03/10 19:54:01 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	init_xpm_link_down(t_game *g)
{
	g->textures.link_idles[0].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_00, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles[1].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_00, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles[2].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_00, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles[3].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_01, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles[4].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_02, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles[5].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_00, &g->textures.size.x, &g->textures.size.y);
}

static void	init_xpm_link_left(t_game *g)
{
	g->textures.link_idles_left[0].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_LEFT_00, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_left[1].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_LEFT_00, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_left[2].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_LEFT_00, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_left[3].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_LEFT_01, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_left[4].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_LEFT_02, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_left[5].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_LEFT_00, &g->textures.size.x, &g->textures.size.y);
}

static void	init_xpm_link_right(t_game *g)
{
	g->textures.link_idles_right[0].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_RIGHT_00, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_right[1].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_RIGHT_00, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_right[2].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_RIGHT_00, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_right[3].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_RIGHT_01, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_right[4].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_RIGHT_02, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_right[5].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_RIGHT_00, &g->textures.size.x, &g->textures.size.y);
}

void	init_xpm_link_idles(t_game *g)
{
    g->textures.link[txtr_link_back].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_BACK, &g->textures.size.x, &g->textures.size.y);
    init_xpm_link_down(g);
    init_xpm_link_left(g);
    init_xpm_link_right(g);
}