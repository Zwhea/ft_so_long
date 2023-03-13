/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:54:53 by twang             #+#    #+#             */
/*   Updated: 2023/03/13 17:22:23 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_hearts(t_game *g)
{
	int		width;
	int		heigth;
	int		i;

	heigth = g->window_size.y + 96;
	width = (g->window_size.x / 2) + 38;
	i = 1;
	while (i < width - 1)
	{
		mlx_put_image_to_window(g->mlx, g->window,
			g->textures.items[txtr_grass].sprite, IMG_WIDTH * i,
			IMG_HEIGHT * (heigth - 1));
		i++;
	}
	if (g->player.nb_lifes == 3)
		mlx_put_image_to_window(g->mlx, g->window,
			g->textures.items[txtr_full_hearts].sprite, width, heigth);
	if (g->player.nb_lifes == 2)
		mlx_put_image_to_window(g->mlx, g->window,
			g->textures.items[txtr_two_hearts].sprite, width, heigth);
	if (g->player.nb_lifes == 1)
		mlx_put_image_to_window(g->mlx, g->window,
			g->textures.items[txtr_one_heart].sprite, width, heigth);
}

void	display_string_collectibles_left(t_game *g)
{
	char	*collectibles_left;
	int		width;
	int		heigth;
	int		i;

	collectibles_left = ft_itoa(g->map.items.collectibles);
	width = g->window_size.x + 2;
	heigth = g->window_size.y + 2;
	i = 1;
	while (i < width - 1)
	{
		mlx_put_image_to_window(g->mlx, g->window,
			g->textures.items[txtr_grass].sprite, IMG_WIDTH * i,
			IMG_HEIGHT * (heigth - 1));
		i++;
	}
	mlx_string_put(g->mlx, g->window, g->window_size.x - 96,
		(heigth * 96) - 48, 0xFFFFFF, collectibles_left);
	mlx_string_put(g->mlx, g->window, g->window_size.x - 80,
		(heigth * 96) - 48, 0xFFFFFF, "Collectibles left");
	free(collectibles_left);
	collectibles_left = NULL;
}

void	display_string_moves(t_game *g)
{
	char	*steps;
	int		width;
	int		heigth;
	int		i;

	steps = ft_itoa(g->player.nb_moves);
	width = g->window_size.x + 2;
	heigth = g->window_size.y + 2;
	i = 1;
	while (i < width - 1)
	{
		mlx_put_image_to_window(g->mlx, g->window,
			g->textures.items[txtr_grass].sprite, IMG_WIDTH * i,
			IMG_HEIGHT * (heigth - 1));
		i++;
	}
	mlx_string_put(g->mlx, g->window, 144,
		(heigth * 96) - 48, 0xFFFFFF, "Moves count =");
	mlx_string_put(g->mlx, g->window, 256,
		(heigth * 96) - 48, 0xFFFFFF, steps);
	free(steps);
	steps = NULL;
}
