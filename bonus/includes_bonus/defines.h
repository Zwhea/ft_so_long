/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:17:24 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/10 20:48:55 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

/*----------------------------------------------------------------------------*/

/*==textures size=============================================================*/

# define IMG_HEIGHT 96
# define IMG_WIDTH 96

/*==number sprites textures===================================================*/

# define NB_SPRITES_WALL 28
# define NB_SPRITES_ITEMS 10
# define NB_SPRITES_LINK 6
# define NB_SPRITES_LINK_ITEMS 3
# define NB_SPRITES_HEART 3

/*==paths to xpm files========================================================*/

/*--items---------------------------------------------------------------------*/

# define XPM_GRASS "./assets/textures/xpm/walls/grass.xpm"
# define XPM_COLLECTIBLE "./assets/textures/xpm/items/collectible_closed.xpm"
# define XPM_COLLECTIBLE_OPEN "./assets/textures/xpm/items/collectible_open.xpm"
# define XPM_EXIT "./assets/textures/xpm/items/exit_closed.xpm"
# define XPM_EXIT_OPEN "./assets/textures/xpm/items/exit_open.xpm"
# define XPM_WIN "./assets/textures/xpm/items/win.xpm"
# define XPM_LOSE "./assets/textures/xpm/items/lose.xpm"
# define XPM_ONE_HEART "./assets/textures/xpm/items/one_heart.xpm"
# define XPM_TWO_HEARTS "./assets/textures/xpm/items/two_hearts.xpm"
# define XPM_FULL_HEARTS "./assets/textures/xpm/items/full_heart.xpm"

/*--player--------------------------------------------------------------------*/

/*--hurt--------------------------------------------------------------------*/

# define XPM_LINK_HURT "./assets/textures/xpm/link/hurt/link_down_hurt.xpm"
# define XPM_LINK_LEFT_HURT "./assets/textures/xpm/link/hurt/link_left_hurt.xpm"
# define XPM_LINK_RIGHT_HURT "./assets/textures/xpm/link/hurt/link_right_hurt.xpm"
# define XPM_LINK_UP_HURT "./assets/textures/xpm/link/hurt/link_up_hurt.xpm"

/*--idles--------------------------------------------------------------------*/

# define XPM_LINK_BACK "./assets/textures/xpm/link/idles/link_back.xpm"
# define XPM_LINK_LEFT_00 "./assets/textures/xpm/link/idles/link_left00.xpm"
# define XPM_LINK_LEFT_01 "./assets/textures/xpm/link/idles/link_left01.xpm"
# define XPM_LINK_LEFT_02 "./assets/textures/xpm/link/idles/link_left02.xpm"
# define XPM_LINK_RIGHT_00 "./assets/textures/xpm/link/idles/link_right00.xpm"
# define XPM_LINK_RIGHT_01 "./assets/textures/xpm/link/idles/link_right01.xpm"
# define XPM_LINK_RIGHT_02 "./assets/textures/xpm/link/idles/link_right02.xpm"
# define XPM_LINK_00 "./assets/textures/xpm/link/idles/link00.xpm"
# define XPM_LINK_01 "./assets/textures/xpm/link/idles/link01.xpm"
# define XPM_LINK_02 "./assets/textures/xpm/link/idles/link02.xpm"

/*--on items--------------------------------------------------------------------*/

# define XPM_LINK_COLLECT "./assets/textures/xpm/link/on_items/link_collect.xpm"
# define XPM_LINK_EXIT "./assets/textures/xpm/link/on_items/link_exit.xpm"

/*----------------------------------------------------------------------------*/

/*--slimes--------------------------------------------------------------------*/

# define XPM_SLIME_00 "./assets/textures/xpm/slimes/slime00.xpm"
# define XPM_SLIME_01 "./assets/textures/xpm/slimes/slime01.xpm"
# define XPM_SLIME_02 "./assets/textures/xpm/slimes/slime02.xpm"
# define XPM_SLIME_03 "./assets/textures/xpm/slimes/slime03.xpm"
# define XPM_SLIME_04 "./assets/textures/xpm/slimes/slime04.xpm"
# define XPM_SLIME_05 "./assets/textures/xpm/slimes/slime05.xpm"

/*--walls---------------------------------------------------------------------*/

# define XPM_B_BOT_LEFT "./assets/textures/xpm/walls/b_bot_left.xpm"
# define XPM_B_BOT_RIGHT "./assets/textures/xpm/walls/b_bot_right.xpm"
# define XPM_B_LEFT "./assets/textures/xpm/walls/b_left.xpm"
# define XPM_B_LEFT_EXTR "./assets/textures/xpm/walls/b_left_extr.xpm"
# define XPM_B_LEFT_S "./assets/textures/xpm/walls/b_left_s.xpm"
# define XPM_MID_BOT "./assets/textures/xpm/walls/b_mid_bot.xpm"
# define XPM_MID_LEFT "./assets/textures/xpm/walls/b_mid_left.xpm"
# define XPM_MID_RIGHT "./assets/textures/xpm/walls/b_mid_right.xpm"
# define XPM_MID_TOP "./assets/textures/xpm/walls/b_mid_top.xpm"
# define XPM_B_RIGHT "./assets/textures/xpm/walls/b_right.xpm"
# define XPM_B_RIGHT_EXTR "./assets/textures/xpm/walls/b_right_extr.xpm"
# define XPM_B_RIGHT_S "./assets/textures/xpm/walls/b_right_s.xpm"
# define XPM_B_TOP_LEFT "./assets/textures/xpm/walls/b_top_left.xpm"
# define XPM_B_TOP_RIGHT "./assets/textures/xpm/walls/b_top_right.xpm"
# define XPM_COLUMN "./assets/textures/xpm/walls/column.xpm"
# define XPM_I_BOT_EXTR "./assets/textures/xpm/walls/i_bot_extr.xpm"
# define XPM_I_BOT_LEFT "./assets/textures/xpm/walls/i_bot_left.xpm"
# define XPM_I_BOT_RIGHT "./assets/textures/xpm/walls/i_bot_right.xpm"
# define XPM_I_MID_CROSS "./assets/textures/xpm/walls/i_mid_cross.xpm"
# define XPM_I_MID_LEFT "./assets/textures/xpm/walls/i_mid_left.xpm"
# define XPM_I_MID_RIGHT "./assets/textures/xpm/walls/i_mid_right.xpm"
# define XPM_I_TOP_EXTR "./assets/textures/xpm/walls/i_top_extr.xpm"
# define XPM_I_TOP_LEFT "./assets/textures/xpm/walls/i_top_left.xpm"
# define XPM_I_TOP_RIGHT "./assets/textures/xpm/walls/i_top_right.xpm"
# define XPM_IN_WALL "./assets/textures/xpm/walls/in_wall.xpm"
# define XPM_LEFT_EXTR "./assets/textures/xpm/walls/left_extr.xpm"
# define XPM_RIGHT_EXTR "./assets/textures/xpm/walls/right_extr.xpm"
# define XPM_WALL "./assets/textures/xpm/walls/wall.xpm"

/*----------------------------------------------------------------------------*/

#endif
