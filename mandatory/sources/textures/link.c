/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:12:54 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/14 16:57:12 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_xpm_link(t_game *g)
{
	g->textures.link[txtr_link].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK, &g->textures.size.x, &g->textures.size.y);
	g->textures.link[txtr_link_left].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_LEFT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link[txtr_link_right].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_RIGHT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link[txtr_link_back].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_BACK, &g->textures.size.x, &g->textures.size.y);
	g->textures.link[txtr_link_collect].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_COLLECT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link[txtr_link_exit].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_EXIT, &g->textures.size.x, &g->textures.size.y);
}
