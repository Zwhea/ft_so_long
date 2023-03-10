/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slime.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:40:52 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/10 20:43:08 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_xpm_slime(t_game *g)
{
	g->textures.slime[0].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_SLIME_00, &g->textures.size.x, &g->textures.size.y);
	g->textures.slime[1].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_SLIME_01, &g->textures.size.x, &g->textures.size.y);
	g->textures.slime[2].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_SLIME_02, &g->textures.size.x, &g->textures.size.y);
	g->textures.slime[3].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_SLIME_03, &g->textures.size.x, &g->textures.size.y);
	g->textures.slime[4].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_SLIME_04, &g->textures.size.x, &g->textures.size.y);
	g->textures.slime[5].sprite = mlx_xpm_file_to_image(g->mlx, \
	XPM_SLIME_05, &g->textures.size.x, &g->textures.size.y);
}