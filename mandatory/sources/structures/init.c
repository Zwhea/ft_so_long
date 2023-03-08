/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:13:28 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/08 19:13:30 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_struct(t_game *g)
{
	ft_memset(g, 0, sizeof(t_game));
	ft_memset(&g->map, 0, sizeof(t_map));
	ft_memset(&g->player, 0, sizeof(t_player));
	ft_memset(&g->map.error, 1, sizeof(t_map_error));
	ft_memset(&g->textures, 0, sizeof(t_textures));
	ft_memset(&g->press, 0, sizeof(t_press));
	g->end = false;
}

void	init_mlx(t_game *g)
{
	set_vec2i(&g->window_size, g->map.size.x * IMG_WIDTH + 192, \
		g->map.size.y * IMG_HEIGHT + 192);
	g->mlx = mlx_init();
	if (g->mlx == NULL)
		clean(g);
	g->window = mlx_new_window(g->mlx, g->window_size.x, g->window_size.y, \
		"so_long");
	init_textures(g);
}
