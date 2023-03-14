/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:54:53 by twang             #+#    #+#             */
/*   Updated: 2023/03/14 16:31:39 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	display_hearts(t_game *g)
{
	int		width;
	int		heigth;

	width = g->map.size.x + 2;
	heigth = g->map.size.y + 2;
	if (g->player.nb_lifes == 3)
		display_image(g, g->textures.items[txtr_full_hearts].sprite, width / 2,
			heigth - 1);
	else if (g->player.nb_lifes == 2)
		display_image(g, g->textures.items[txtr_two_hearts].sprite, width / 2,
			heigth - 1);
	else
		display_image(g, g->textures.items[txtr_one_heart].sprite, width / 2,
			heigth - 1);
}

static void	display_string_collectibles_left(t_game *g)
{
	char	*collectibles_left;
	int		width;
	int		heigth;

	collectibles_left = ft_itoa(g->map.items.collectibles);
	width = g->window_size.x - 2;
	heigth = g->map.size.y + 2;
	mlx_string_put(g->mlx, g->window, width - 240,
		(heigth * 96) - 48, 0xFFFFFF, collectibles_left);
	mlx_string_put(g->mlx, g->window, width - 224,
		(heigth * 96) - 48, 0xFFFFFF, "Collectibles left");
	free(collectibles_left);
	collectibles_left = NULL;
}

static void	display_string_moves(t_game *g)
{
	char	*steps;
	int		width;
	int		heigth;

	steps = ft_itoa(g->player.nb_moves);
	width = g->map.size.x;
	heigth = g->map.size.y + 2;
	mlx_string_put(g->mlx, g->window, width + 96,
		(heigth * 96) - 48, 0xFFFFFF, "Moves count =");
	mlx_string_put(g->mlx, g->window, width + 208,
		(heigth * 96) - 48, 0xFFFFFF, steps);
	free(steps);
	steps = NULL;
}

void	display_data(t_game *g)
{
	int		width;
	int		heigth;
	int		i;

	width = g->map.size.x + 2;
	heigth = g->map.size.y + 2;
	i = 1;
	while (i < width - 1)
	{
		display_image(g, g->textures.items[txtr_grass].sprite, i, heigth - 1);
		i++;
	}
	display_string_moves(g);
	display_string_collectibles_left(g);
	if (g->map.items.slimes > 0)
		display_hearts(g);
}
