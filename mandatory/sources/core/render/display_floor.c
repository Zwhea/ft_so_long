/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_floor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:14:26 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/14 16:54:31 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_floor(t_game *g)
{
	int	x;
	int	y;

	y = 0;
	while (y < g->map.size.y + 2)
	{
		x = 0;
		while (x < g->map.size.x + 2)
		{
			display_image(g, g->textures.items[txtr_grass].sprite, x, y);
			x++;
		}
		y++;
	}
}
