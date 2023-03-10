/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:15:06 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/10 12:18:33 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

/*----------------------------------------------------------------------------*/

# include "defines.h"

/*----------------------------------------------------------------------------*/

typedef struct s_sprite		t_sprite;
typedef struct s_vec2i		t_vec2i;
typedef struct s_player		t_player;
typedef struct s_press		t_press;
typedef struct s_map_error	t_map_error;
typedef struct s_map_items	t_map_items;
typedef struct s_textures	t_textures;
typedef struct s_map		t_map;
typedef struct s_game		t_game;

/*----------------------------------------------------------------------------*/

struct s_sprite
{
	void		*sprite;
};

struct s_vec2i
{
	int			x;
	int			y;
};

struct s_player
{
	t_vec2i		pos;
	int			nb_moves;
};

struct s_press
{
	bool		a;
	bool		d;
	bool		s;
	bool		w;
};

struct s_map_error
{
	bool		is_valid;
	bool		top_border;
	bool		right_border;
	bool		bottom_border;
	bool		left_border;
};

struct s_map_items
{
	int			collectibles;
	int			players;
	int			exits;
	int			invalid_characters;
};

struct s_textures
{
	t_sprite	walls[NB_SPRITES_WALL];
	t_sprite	items[NB_SPRITES_ITEMS];
	t_sprite	link[NB_SPRITES_LINK];
	t_vec2i		size;
};

struct s_map
{
	t_map_error	error;
	t_map_items	items;
	t_vec2i		size;
	t_vec2i		exit_pos;
	char		**map;
	char		**map_tmp;
};

struct s_game
{
	t_textures	textures;
	t_player	player;
	t_map		map;
	t_press		press;
	t_vec2i		window_size;
	void		*mlx;
	void		*window;
	bool		end;
};

#endif // STRUCTURES_H
