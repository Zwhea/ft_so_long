/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:13:08 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/10 20:43:27 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_textures(t_game *g)
{
	set_vec2i(&g->textures.size, IMG_WIDTH, IMG_HEIGHT);
	init_xpm_items(g);
	init_xpm_link(g);
	init_xpm_slime(g);
	init_xpm_walls(g);
}
