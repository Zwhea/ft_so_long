/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:12:54 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/10 19:54:17 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	init_xpm_link_on_items(t_game *g)
{
	g->textures.link[txtr_link_collect].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_COLLECT, &g->textures.size.x, &g->textures.size.y);
	g->textures.link[txtr_link_exit].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_LINK_EXIT, &g->textures.size.x, &g->textures.size.y);
}

void	init_xpm_link(t_game *g)
{
	init_xpm_link_on_items(g);
	init_xpm_link_hurt(g);
	init_xpm_link_idles(g);
}
