/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secure.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:07:57 by twang             #+#    #+#             */
/*   Updated: 2023/03/15 18:47:26 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	clean_all_and_close(t_game *g, char *s)
{
	error();
	warn(s);
	clean(g);
}

static void	secure_link_textures(t_game *g, int i)
{
	if (i < NB_SPRITES_LINK_ITEMS - 1 && !(g->textures.link[i].sprite))
		clean_all_and_close(g, "issue with link's textures");
	if (i < NB_SPRITES_LINK - 1 && !(g->textures.link_idles[i].sprite))
		clean_all_and_close(g, "issue with link idles's textures");
	if (i < NB_SPRITES_LINK - 1 && !(g->textures.link_idles_left[i].sprite))
		clean_all_and_close(g, "issue with link idles left's textures");
	if (i < NB_SPRITES_LINK - 1 && !(g->textures.link_idles_right[i].sprite))
		clean_all_and_close(g, "issue with link idles right's textures");
	if (i < NB_SPRITES_LINK - 1 && !(g->textures.link_idles_hurt[i].sprite))
		clean_all_and_close(g, "issue with link idles hurt's textures");
	if (i < NB_SPRITES_LINK - 1 && \
	!(g->textures.link_idles_left_hurt[i].sprite))
		clean_all_and_close(g, "issue with link idles left hurt's textures");
	if (i < NB_SPRITES_LINK - 1 && \
	!(g->textures.link_idles_right_hurt[i].sprite))
		clean_all_and_close(g, "issue with link idles right hurt's textures");
	if (i < NB_SPRITES_LINK - 1 && !(g->textures.link_idles_up_hurt[i].sprite))
		clean_all_and_close(g, "issue with link idles up hurt's textures");
}

void	secure_textures(t_game *g)
{
	int	i;

	i = 0;
	while (i < NB_SPRITES_WALL - 1)
	{
		secure_link_textures(g, i);
		if (i < NB_SPRITES_ITEMS - 1 && !(g->textures.items[i].sprite))
			clean_all_and_close(g, "issue with items's textures");
		if (i < NB_SPRITES_LINK - 1 && !(g->textures.slime[i].sprite))
			clean_all_and_close(g, "issue with slime's textures");
		if (!(g->textures.walls[i].sprite))
			clean_all_and_close(g, "issue with walls's textures");
		i++;
	}
}
