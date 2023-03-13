/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:13:15 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/13 17:19:18 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	clean_link_textures(t_game *g, int i)
{
	if (i < NB_SPRITES_LINK_ITEMS && g->textures.link[i].sprite)
		mlx_destroy_image(g->mlx, g->textures.link[i].sprite);
	if (i < NB_SPRITES_LINK && g->textures.link_idles[i].sprite)
		mlx_destroy_image(g->mlx, g->textures.link_idles[i].sprite);
	if (i < NB_SPRITES_LINK && g->textures.link_idles_left[i].sprite)
		mlx_destroy_image(g->mlx, g->textures.link_idles_left[i].sprite);
	if (i < NB_SPRITES_LINK && g->textures.link_idles_right[i].sprite)
		mlx_destroy_image(g->mlx, g->textures.link_idles_right[i].sprite);
	if (i < NB_SPRITES_LINK && g->textures.link_idles_hurt[i].sprite)
		mlx_destroy_image(g->mlx, g->textures.link_idles_hurt[i].sprite);
	if (i < NB_SPRITES_LINK && g->textures.link_idles_left_hurt[i].sprite)
		mlx_destroy_image(g->mlx,
			g->textures.link_idles_left_hurt[i].sprite);
	if (i < NB_SPRITES_LINK && g->textures.link_idles_right_hurt[i].sprite)
		mlx_destroy_image(g->mlx,
			g->textures.link_idles_right_hurt[i].sprite);
	if (i < NB_SPRITES_LINK && g->textures.link_idles_up_hurt[i].sprite)
		mlx_destroy_image(g->mlx, g->textures.link_idles_up_hurt[i].sprite);
}

void	clean_textures(t_game *g)
{
	int	i;

	i = 0;
	while (i < NB_SPRITES_WALL)
	{
		clean_link_textures(g, i);
		if (i < NB_SPRITES_ITEMS && g->textures.items[i].sprite)
			mlx_destroy_image(g->mlx, g->textures.items[i].sprite);
		if (i < NB_SPRITES_ITEMS && g->textures.slime[i].sprite)
			mlx_destroy_image(g->mlx, g->textures.slime[i].sprite);
		if (g->textures.walls[i].sprite)
			mlx_destroy_image(g->mlx, g->textures.walls[i].sprite);
		i++;
	}
}
