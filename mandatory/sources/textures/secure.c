/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secure.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:07:57 by twang             #+#    #+#             */
/*   Updated: 2023/03/15 17:57:06 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	secure_textures(t_game *g)
{
	int	i;

	i = 0;
	while (i < NB_SPRITES_WALL - 1)
	{
		if (i < NB_SPRITES_ITEMS - 1 && !(g->textures.items[i].sprite))
		{
			error();
			warn("issue with items's textures");
			clean(g);
		}
		if (i < NB_SPRITES_LINK - 1 && !(g->textures.link[i].sprite))
		{
			error();
			warn("issue with link's textures");
			clean(g);
		}
		if (!(g->textures.walls[i].sprite))
		{
			error();
			warn("issue with walls's textures");
			clean(g);
		}
		i++;
	}
}
