/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:13:08 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/15 17:47:34 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_textures(t_game *g)
{
	set_vec2i(&g->textures.size, IMG_WIDTH, IMG_HEIGHT);
	init_xpm_items(g);
	init_xpm_link(g);
	init_xpm_walls(g);
	secure_textures(g);
}
