/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_result.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:12:23 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/08 20:24:54 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_win(t_game *g)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	x = (g->window_size.x / 2) - 240;
	y = (g->window_size.y / 2) - 144;
	while (g->map.map[i])
	{
		j = 0;
		while (g->map.map[i][j])
		{
			display_image(g, g->textures.items[txtr_grass].sprite, i, j);
			j++;
		}
		i++;
	}
	mlx_put_image_to_window(g->mlx, g->window, \
		g->textures.items[txtr_won].sprite, x, y);
	ft_dprintf(1, YELLOW"Congratulations! ");
	ft_dprintf(1, "You completed a great game in only"END);
	ft_dprintf(1, " %d moves!\n", g->player.nb_moves);
}