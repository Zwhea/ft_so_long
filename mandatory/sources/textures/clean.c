/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:13:15 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/10 12:21:09 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	clean_textures(t_game *g)
{
	int	i;

	i = 0;
	while (i < NB_SPRITES_WALL)
	{
		if (i < NB_SPRITES_ITEMS && g->textures.items[i].sprite)
			mlx_destroy_image(g->mlx, g->textures.items[i].sprite);
		if (i < NB_SPRITES_LINK && g->textures.link[i].sprite)
			mlx_destroy_image(g->mlx, g->textures.link[i].sprite);
		if (g->textures.walls[i].sprite)
			mlx_destroy_image(g->mlx, g->textures.walls[i].sprite);
		i++;
	}
}
