/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slimes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:47:46 by twang             #+#    #+#             */
/*   Updated: 2023/03/15 11:22:50 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	animate_hurt_on_slimes(t_game *g, int frame)
{
	if (g->press.down == true)
		display_img_in_map(g,
			g->textures.link_idles_hurt[frame / 10000].sprite, g->player.pos.x,
			g->player.pos.y);
	else if (g->press.left == true)
		display_img_in_map(g,
			g->textures.link_idles_left_hurt[frame / 10000].sprite,
			g->player.pos.x, g->player.pos.y);
	else if (g->press.right == true)
		display_img_in_map(g,
			g->textures.link_idles_right_hurt[frame / 10000].sprite,
			g->player.pos.x, g->player.pos.y);
	else
		display_img_in_map(g,
			g->textures.link_idles_up_hurt[frame / 10000].sprite,
			g->player.pos.x, g->player.pos.y);
}

void	animate_static_slimes(t_game *g, int frame)
{
	int	x;
	int	y;
	int	index;

	index = 0;
	while (index < g->map.items.slimes)
	{
		x = g->slime.pos[index].x;
		y = g->slime.pos[index].y;
		if (frame % 10000 == 0 && g->end == false && g->press.hurt == false)
			display_img_in_map(g,
				g->textures.slime[frame / 10000].sprite, x, y);
		else if (frame % 10000 == 0 && g->end == false && g->press.hurt == true)
			animate_hurt_on_slimes(g, frame);
		index++;
	}
}
