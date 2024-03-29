/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:13:34 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/16 16:14:55 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	clean_map(t_game *g)
{
	ft_free((void **) g->map.map, g->map.size.y);
	ft_free((void **) g->map.map_tmp, g->map.size.y);
	exit(1);
}

int	clean(t_game *g)
{
	ft_free((void **) g->map.map, g->map.size.y);
	clean_textures(g);
	if (g->window)
		mlx_destroy_window(g->mlx, g->window);
	if (g->mlx)
		mlx_destroy_display(g->mlx);
	free(g->mlx);
	exit(0);
}
