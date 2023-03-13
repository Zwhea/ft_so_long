/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:34:31 by twang             #+#    #+#             */
/*   Updated: 2023/03/13 17:20:30 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	animations(t_game *g)
{
	static int	frame;

	if (frame % 10000 == 0)
	{
		animate_static_player(g, frame);
		if (g->map.items.slimes > 0 && g->player.nb_lifes > 0)
			animate_static_slimes(g, frame);
	}
	frame++;
	if (frame >= 60000)
		frame = 0;
	return (0);
}
