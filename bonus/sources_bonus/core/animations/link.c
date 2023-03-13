/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:37:20 by twang             #+#    #+#             */
/*   Updated: 2023/03/13 17:19:57 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	animate_static_player(t_game *g, int frame)
{
	int	x;
	int	y;

	x = g->player.pos.x;
	y = g->player.pos.y;
	if (g->map.map[y][x] == space || g->map.map[y][x] == player)
	{
		if (g->press.down == true || g->player.nb_moves == 0)
			display_image_in_map(g,
				g->textures.link_idles[frame / 10000].sprite, x, y);
		else if (g->press.left == true)
			display_image_in_map(g,
				g->textures.link_idles_left[frame / 10000].sprite, x, y);
		else if (g->press.right == true)
			display_image_in_map(g,
				g->textures.link_idles_right[frame / 10000].sprite, x, y);
	}
}
