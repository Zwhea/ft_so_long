/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:06:33 by mmosca            #+#    #+#             */
/*   Updated: 2023/03/14 16:06:13 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_press(t_keycode key_code, t_game *g)
{
	if (key_code == esc_key)
		clean(g);
	if (g->end == true)
		return (0);
	if (key_code == a_key || key_code == left_key)
	{
		ft_memset(&g->press, 0, sizeof(t_press));
		move_left(g);
	}
	else if (key_code == d_key || key_code == right_key)
	{
		ft_memset(&g->press, 0, sizeof(t_press));
		move_right(g);
	}
	else if (key_code == w_key || key_code == up_key)
	{
		ft_memset(&g->press, 0, sizeof(t_press));
		move_up(g);
	}
	else if (key_code == s_key || key_code == down_key)
	{
		ft_memset(&g->press, 0, sizeof(t_press));
		move_down(g);
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_game	game;

	init_struct(&game);
	if (check_arguments(ac, av) == false)
		return (1);
	parsing(&game, av[1]);
	init_mlx(&game);
	display_floor(&game);
	display_map(&game);
	display_data(&game);
	mlx_key_hook(game.window, key_press, &game);
	mlx_loop_hook(game.mlx, animations, &game);
	mlx_hook(game.window, 17, 1L << 17, clean, &game);
	mlx_loop(game.mlx);
	clean(&game);
	return (0);
}
