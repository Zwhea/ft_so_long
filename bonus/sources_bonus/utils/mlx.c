/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:12:32 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/08 20:40:01 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_image(t_game *g, void *image, int x, int y)
{
	mlx_put_image_to_window(g->mlx, g->window, image, x * IMG_WIDTH, \
	y * IMG_HEIGHT);
}

void	display_image_in_map(t_game *g, void *image, int x, int y)
{
	mlx_put_image_to_window(g->mlx, g->window, image, (x * IMG_WIDTH) + 96, \
	(y * IMG_HEIGHT) + 96);
}
