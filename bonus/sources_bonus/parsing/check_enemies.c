/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_enemies                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:07:11 by twang             #+#    #+#             */
/*   Updated: 2023/03/10 16:12:40 by twang            ###   ########.fr       */
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
			else if (g->map[y][x] == slime)
			{
				set_vec2i(&g->map.slime[index].pos, x, y);
                ft_dprintf(2, BLUE"index : %d\n"END, index);
                ft_dprintf(2, BLUE"pos.x : %d\n"END, g->map.slime[index].pos.x);
                ft_dprintf(2, BLUE"pos.y : %d\n"END, g->map.slime[index].pos.y);
				index++;
			}
			x++;
		}
		y++;
	}
}