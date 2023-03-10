/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_hurt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:56:36 by twang             #+#    #+#             */
/*   Updated: 2023/03/10 17:14:49 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	init_xpm_link_down_hurt(t_game *g)
{
	g->textures.link_idles_hurt[0].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_HURT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_hurt[1].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_GRASS, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_hurt[2].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_HURT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_hurt[3].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_GRASS, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_hurt[4].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_HURT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_hurt[5].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_GRASS, &g->textures.size.x, &g->textures.size.y);
}

static void	init_xpm_link_left_hurt(t_game *g)
{
	g->textures.link_idles_left_hurt[0].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_LEFT_HURT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_left_hurt[1].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_GRASS, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_left_hurt[2].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_LEFT_HURT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_left_hurt[3].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_GRASS, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_left_hurt[4].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_LEFT_HURT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_left_hurt[5].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_GRASS, &g->textures.size.x, &g->textures.size.y);
}

static void	init_xpm_link_right_hurt(t_game *g)
{
	g->textures.link_idles_right_hurt[0].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_RIGHT_HURT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_right_hurt[1].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_GRASS, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_right_hurt[2].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_RIGHT_HURT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_right_hurt[3].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_GRASS, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_right_hurt[4].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_RIGHT_HURT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_right_hurt[5].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_GRASS, &g->textures.size.x, &g->textures.size.y);
}

static void	init_xpm_link_up_hurt(t_game *g)
{
	g->textures.link_idles_up_hurt[0].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_UP_HURT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_up_hurt[1].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_GRASS, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_up_hurt[2].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_UP_HURT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_up_hurt[3].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_GRASS, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_up_hurt[4].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_UP_HURT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link_idles_up_hurt[5].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_GRASS, &g->textures.size.x, &g->textures.size.y);
}

void	init_xpm_link_hurt(t_game *g)
{
    init_xpm_link_down_hurt(g);
    init_xpm_link_left_hurt(g);
    init_xpm_link_right_hurt(g);
    init_xpm_link_up_hurt(g);
}