/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:12:39 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/15 10:46:17 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	check_if_this_is_first_error(t_game *g)
{
	if (g->map.error.is_valid == true)
	{
		error();
		g->map.error.is_valid = false;
	}
}

void	display_map_format_error(t_game *g, t_map_error_code error_code)
{
	check_if_this_is_first_error(g);
	if (error_code == no_map)
		warn(VERBOSE_NO_MAP);
	else if (error_code == bad_size)
		warn(VERBOSE_BAD_SIZE);
	else if (error_code == bad_format)
	{
		warn(VERBOSE_NOT_RECTANGLE);
		warn(VERBOSE_CHECK);
	}
}

void	display_map_item_error(t_game *g, t_map_error_code error_code)
{
	check_if_this_is_first_error(g);
	if (error_code == no_player)
		warn(VERBOSE_NO_PLAYER);
	else if (error_code == no_collectible)
		warn(VERBOSE_NO_COLLECTIBLE);
	else if (error_code == no_exit)
		warn(VERBOSE_NO_EXIT);
	else if (error_code == too_much_player)
		warn(VERBOSE_TOO_MUCH_PLAYER);
	else if (error_code == too_much_exit)
		warn(VERBOSE_TOO_MUCH_EXIT);
	else if (error_code == bad_char)
		warn(VERBOSE_BAD_CHAR);
	else if (error_code == too_much_slimes)
		warn(VERBOSE_SLIMES);
}

void	display_map_wall_error(t_game *g, t_map_error_code error_code)
{
	check_if_this_is_first_error(g);
	if (error_code == top_border && g->map.error.top_border == true)
	{
		warn(VERBOSE_TOP_BORDER);
		g->map.error.top_border = false;
	}
	else if (error_code == right_border && g->map.error.right_border == true)
	{
		warn(VERBOSE_RIGHT_BORDER);
		g->map.error.right_border = false;
	}
	else if (error_code == bottom_border && g->map.error.bottom_border == true)
	{
		warn(VERBOSE_BOTTOM_BORDER);
		g->map.error.bottom_border = false;
	}
	else if (error_code == left_border && g->map.error.left_border == true)
	{
		warn(VERBOSE_LEFT_BORDER);
		g->map.error.left_border = false;
	}
}

void	display_map_unsolvable_error(t_game *g)
{
	check_if_this_is_first_error(g);
	warn(VERBOSE_UNSOLVABLE);
	clean_map(g);
}
