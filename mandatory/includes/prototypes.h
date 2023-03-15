/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:16:58 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/15 14:07:02 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

/*----------------------------------------------------------------------------*/

# include "structures.h"

/*----------------------------------------------------------------------------*/

/*==CORE======================================================================*/

/*--render--------------------------------------------------------------------*/

// display_floor.c
void	display_floor(t_game *g);

// display_map.c
void	display_map(t_game *g);

// display_walls.c
void	display_walls(t_game *g, int x, int y);

// display_result.c
void	display_win(t_game *g);

/*--mouvements----------------------------------------------------------------*/

// move_down.c
void	move_down(t_game *g);

// move_left.c
void	move_left(t_game *g);

// move_right.c
void	move_right(t_game *g);

// move_up.c
void	move_up(t_game *g);

/*==PARSING===================================================================*/

// backtracking.c
void	backtracking(t_game *g, int x, int y);

// check_arguments.c
bool	check_arguments(int argc, char **argv);

// check_map.c
void	check_map(t_game *g);

// get_map.c
void	get_map(t_game *g, const char *file);

// parsing.c
void	parsing(t_game *g, const char *file);

/*==STRUCTURES================================================================*/

// clean.c
void	clean_map(t_game *g);
int		clean(t_game *g);

// init.c
void	init_struct(t_game *g);
void	init_mlx(t_game *g);

/*==TEXTURES==================================================================*/

// clean.c
void	clean_textures(t_game *g);

// init.c
void	init_textures(t_game *g);

// items.c
void	init_xpm_items(t_game *g);

// link.c
void	init_xpm_link(t_game *g);

// walls.c
void	init_xpm_walls(t_game *g);

/*==UTILS=====================================================================*/

// errors.c
void	display_map_format_error(t_game *g, t_map_error_code error_code);
void	display_map_item_error(t_game *g, t_map_error_code error_code);
void	display_map_wall_error(t_game *g, t_map_error_code error_code);
void	display_map_unsolvable_error(t_game *g);

// mlx.c
void	display_image(t_game *g, void *image, int x, int y);
void	display_img_in_map(t_game *g, void *image, int x, int y);

// print.c
void	error(void);
void	warn(char *message);
void	usage(void);

// utils.c
void	check_tiles(t_game *g, int x, int y);
void	set_vec2i(t_vec2i *vector, int x, int y);
bool	is_valid_char(char c);
void	fill_map_items(t_game *g);

#endif // PROTOTYPES_H
