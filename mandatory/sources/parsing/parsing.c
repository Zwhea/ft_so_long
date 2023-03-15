/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:13:41 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/15 13:38:22 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	debug(t_game *g)
{
	ft_dprintf(2, BLUE"size.x : %d\n", g->map.size.x);
	ft_dprintf(2, BLUE"size.y : %d\n", g->map.size.y);
	ft_dprintf(2, BLUE"size : %d\n", g->map.size);
}

void	parsing(t_game *g, const char *file)
{
	get_map(g, file);
	check_map(g);
}
