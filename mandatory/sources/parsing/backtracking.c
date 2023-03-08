/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:14:02 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/08 19:14:03 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	backtracking(t_game *g, int x, int y)
{
	if (g->map.map_tmp[y][x - 1] != wall)
	{
		g->map.map_tmp[y][x - 1] = wall;
		backtracking(g, x - 1, y);
	}
	if (g->map.map_tmp[y][x + 1] != wall)
	{
		g->map.map_tmp[y][x + 1] = wall;
		backtracking(g, x + 1, y);
	}
	if (g->map.map_tmp[y - 1][x] != wall)
	{
		g->map.map_tmp[y - 1][x] = wall;
		backtracking(g, x, y - 1);
	}
	if (g->map.map_tmp[y + 1][x] != wall)
	{
		g->map.map_tmp[y + 1][x] = wall;
		backtracking(g, x, y + 1);
	}
	g->map.map_tmp[y][x] = wall;
}
