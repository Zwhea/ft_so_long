/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_result.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:12:23 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/14 16:03:55 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	display_string_win(t_game *g)
{
	char	*steps;
	int		width;
	int		heigth;
	int		i;

	steps = ft_itoa(g->player.nb_moves);
	width = g->map.size.x + 2;
	heigth = g->map.size.y + 2;
	i = 1;
	while (i < width - 1)
	{
		display_image(g, g->textures.items[txtr_grass].sprite, i, heigth - 1);
		i++;
	}
	mlx_string_put(g->mlx, g->window, ((width * 96) / 2) - 70,
		(heigth * 96) - 64, 0xFFFFFF, "You won in");
	mlx_string_put(g->mlx, g->window, ((width * 96) / 2) + 6,
		(heigth * 96) - 64, 0xFFFFFF, steps);
	mlx_string_put(g->mlx, g->window, ((width * 96) / 2) + 32,
		(heigth * 96) - 64, 0xFFFFFF, "moves !");
	free(steps);
	steps = NULL;
}

static void	display_string_lose(t_game *g)
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
	mlx_string_put(g->mlx, g->window, ((width * 96) / 2) - 72,
		(heigth * 96) - 64, 0xFFFFFF, "Better luck next time!");
}

void	display_win(t_game *g)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	x = (g->window_size.x / 2) - 240;
	y = (g->window_size.y / 2) - 144;
	while (i < g->map.size.y + 2)
	{
		j = 0;
		while (j < g->map.size.x + 2)
		{
			display_image(g, g->textures.items[txtr_grass].sprite, j, i);
			j++;
		}
		i++;
	}
	mlx_put_image_to_window(g->mlx, g->window,
		g->textures.items[txtr_won].sprite, x, y);
	display_string_win(g);
	ft_dprintf(1, YELLOW"Congratulations! ");
	ft_dprintf(1, "You completed a great game in only"END);
	ft_dprintf(1, " %d moves!\n", g->player.nb_moves);
}

void	display_lose(t_game *g)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	x = (g->window_size.x / 2) - 240;
	y = (g->window_size.y / 2) - 144;
	while (i < g->map.size.y + 2)
	{
		j = 0;
		while (j < g->map.size.x + 2)
		{
			display_image(g, g->textures.items[txtr_grass].sprite, j, i);
			j++;
		}
		i++;
	}
	mlx_put_image_to_window(g->mlx, g->window,
		g->textures.items[txtr_lose].sprite, x, y);
	display_string_lose(g);
	ft_dprintf(1, YELLOW"Too Bad! ");
	ft_dprintf(1, "Better luck next time!\n"END);
}
