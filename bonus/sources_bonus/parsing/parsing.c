/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:13:41 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/08 20:31:30 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	parsing(t_game *g, const char *file)
{
	get_map(g, file);
	check_map(g);
	g->player.print_pos.x = (g->player.pos.x * 96) + 96;
	g->player.print_pos.y = (g->player.pos.x * 96) + 96;
}
