/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_enemies.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:07:11 by twang             #+#    #+#             */
/*   Updated: 2023/03/10 20:23:54 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	fill_map_enemies(t_game *g)
{
	int	x;
	int	y;
	int	index;

	y = 0;
	index = 0;
	g->slime.pos = ft_calloc(g->map.items.slimes, sizeof(t_vec2i));
	while (y < g->map.size.y)
	{
		x = 0;
		while (x < g->map.size.x)
		{
			if (g->map.map[y][x] == slime)
			{
				set_vec2i(&g->slime.pos[index], x, y);
				index++;
			}
			x++;
		}
		y++;
	}
}