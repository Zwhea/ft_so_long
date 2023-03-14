/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enums.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:17:29 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/14 16:29:27 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENUMS_H
# define ENUMS_H

/*----------------------------------------------------------------------------*/

typedef enum e_map_error_code	t_map_error_code;
typedef enum e_tile_char		t_tile_char;
typedef enum e_textures_items	t_textures_items;
typedef enum e_keycode			t_keycode;

/*----------------------------------------------------------------------------*/

enum e_map_error_code
{
	no_player,
	no_collectible,
	no_exit,
	no_map,
	too_much_player,
	too_much_exit,
	bad_char,
	bad_size,
	bad_format,
	top_border,
	right_border,
	bottom_border,
	left_border,
	unsolvable
};

enum e_tile_char
{
	space				= '0',
	wall				= '1',
	collectible			= 'C',
	collectible_open	= 'c',
	slime				= 'S',
	player				= 'P',
	exit_game			= 'E'
};

enum e_textures_items
{
	txtr_grass,
	txtr_collectible,
	txtr_collectible_open,
	txtr_exit,
	txtr_exit_open,
	txtr_won,
	txtr_lose,
	txtr_one_heart,
	txtr_two_hearts,
	txtr_full_hearts
};

enum e_textures_link
{
	txtr_link_collect,
	txtr_link_exit,
	txtr_link_back
};

enum e_textures_walls
{
	b_bot_left,
	b_bot_right,
	b_left,
	b_left_extr,
	b_left_s,
	mid_bot,
	mid_left,
	mid_right,
	mid_top,
	b_right,
	b_right_extr,
	right_s,
	b_top_left,
	b_top_right,
	column,
	i_bot_extr,
	i_bot_left,
	i_bot_right,
	i_mid_cross,
	i_mid_left,
	i_mid_right,
	i_top_extr,
	i_top_left,
	i_top_right,
	in_wall,
	left_extr,
	right_extr,
	walls
};

# ifndef MACOS

enum e_keycode
{
	a_key		=	97,
	b_key		=	98,
	c_key		=	99,
	d_key		=	100,
	s_key		=	115,
	f_key		=	102,
	g_key		=	103,
	h_key		=	104,
	z_key		=	122,
	x_key		=	120,
	v_key		=	118,
	q_key		=	113,
	w_key		=	119,
	e_key		=	101,
	r_key		=	114,
	y_key		=	121,
	t_key		=	116,
	one_key		=	49,
	two_key		=	50,
	three_key	=	51,
	four_key	=	52,
	six_key		=	54,
	five_key	=	53,
	equal_key	=	61,
	nine_key	=	57,
	seven_key	=	55,
	minus_key	=	45,
	eight_key	=	56,
	zero_key	=	48,
	cbracket_key=	93,
	o_key		=	111,
	u_key		=	117,
	obracket_key=	91,
	i_key		=	105,
	p_key		=	112,
	enter_key	=	65293,
	l_key		=	108,
	j_key		=	106,
	quote_key	=	39,
	k_key		=	107,
	semico_key	=	59,
	pipe_key	=	92,
	comma_key	=	44,
	slash_key	=	47,
	n_key		=	110,
	m_key		=	109,
	dot_key		=	46,
	tab_key		=	65289,
	space_key	=	32,
	tilde_key	=	96,
	del_key		=	65288,
	esc_key		=	65307,
	left_key	=	65361,
	right_key	=	65363,
	down_key	=	65364,
	up_key		=	65362,
	ctrl_l_key	=	65507,
	ctrl_r_key	=	65508,
	maj_l_key	=	65505,
	maj_r_key	=	65506,
	alt_l_key	=	65513,
	alt_r_key	=	65514,
	majlock_key	=	65509
};

# else

enum e_keycode
{
	a_key		=	0,
	s_key		=	1,
	d_key		=	2,
	f_key		=	3,
	h_key		=	4,
	g_key		=	5,
	z_key		=	6,
	x_key		=	7,
	c_key		=	8,
	v_key		=	9,
	b_key		=	11,
	q_key		=	12,
	w_key		=	13,
	e_key		=	14,
	r_key		=	15,
	y_key		=	16,
	t_key		=	17,
	one_key		=	18,
	two_key		=	19,
	three_key	=	20,
	four_key	=	21,
	six_key		=	22,
	five_key	=	23,
	equal_key	=	24,
	nine_key	=	25,
	seven_key	=	26,
	minus_key	=	27,
	eight_key	=	28,
	zero_key	=	29,
	cbracket_key=	30,
	o_key		=	31,
	u_key		=	32,
	obracket_key=	33,
	i_key		=	34,
	p_key		=	35,
	enter_key	=	36,
	l_key		=	37,
	j_key		=	38,
	quote_key	=	39,
	k_key		=	40,
	semico_key	=	41,
	pipe_key	=	42,
	comma_key	=	43,
	slash_key	=	44,
	n_key		=	45,
	m_key		=	46,
	dot_key		=	47,
	tab_key		=	48,
	space_key	=	49,
	tilde_key	=	50,
	del_key		=	51,
	esc_key		=	53,
	left_key	=	123,
	right_key	=	124,
	down_key	=	125,
	up_key		=	126,
	ctrl_key	=	256,
	maj_l_key	=	257,
	maj_r_key	=	258,
	cmd_l_key	=	259,
	cmd_r_key	=	260,
	opt_l_key	=	261,
	opt_r_key	=	262,
	majlock_key	=	272,
	fn_key		=	279
};

# endif

#endif // ENUMS_H
