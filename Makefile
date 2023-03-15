# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: twang <twang@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 19:17:58 by wangthea          #+#    #+#              #
#    Updated: 2023/03/15 16:51:46 by twang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include mandatory/config/headers.mk
include mandatory/config/sources.mk
include bonus/config_bonus/headers_bonus.mk
include bonus/config_bonus/sources_bonus.mk

#--variables-------------------------------------------------------------------#

NAME		=	so_long
OS			=	$(shell uname)
DEBUG		=	no
BONUS		=	no

#--includes & libraries--------------------------------------------------------#

INC_DIR		=	mandatory/includes
B_INC_DIR	=	bonus/includes_bonus
LIB_DIR		=	libraries
LIBFT_DIR	=	$(LIB_DIR)/libft

#--sources & objects-----------------------------------------------------------#

SRC_DIR		=	mandatory/sources
B_SRC_DIR	=	bonus/sources_bonus
OBJ_DIR		=	.objects

#--mlx-------------------------------------------------------------------------#

ifeq ($(OS), Darwin)
MLX_DIR 	=	$(LIB_DIR)/mlx_mac
else ifeq ($(OS), Linux)
MLX_DIR 	=	$(LIB_DIR)/mlx_linux
endif

#--flags-----------------------------------------------------------------------#

ifeq ($(BONUS), no)
CFLAGS		=	-Wall -Wextra -Werror -I $(LIBFT_DIR) -I $(MLX_DIR) -I $(INC_DIR)
else
CFLAGS		=	-Wall -Wextra -Werror -I $(LIBFT_DIR) -I $(MLX_DIR) -I $(B_INC_DIR)
endif

DFLAGS		=	-g3 -fsanitize=address
MLX_FLAGS	=	-L $(MLX_DIR)

#--debug & define flags--------------------------------------------------------#

ifeq ($(DEBUG), yes)
CFLAGS 		+=	$(DFLAGS)
endif

ifeq ($(OS), Darwin)
CFLAGS 		+=	-DMACOS
endif

#--mlx flags-------------------------------------------------------------------#

ifeq ($(OS), Darwin)
MLX_FLAGS 	+= -framework OpenGL -framework AppKit
else ifeq ($(OS), Linux)
MLX_FLAGS 	+= -l m -l Xext -l X11 -I $(MLX_DIR)
endif

#--libs------------------------------------------------------------------------#

LIBFT	=	$(LIBFT_DIR)/libft.a
MLX		=	$(MLX_DIR)/libmlx.a

#--objects---------------------------------------------------------------------#

ifeq ($(BONUS), no)
OBJECTS	=	$(addprefix $(OBJ_DIR)/, $(SOURCES:.c=.o))
else 
OBJECTS	=	$(addprefix $(OBJ_DIR)/, $(SOURCES_BONUS:.c=.o))
endif

#--global rules----------------------------------------------------------------#

.DEFAULT_GOAL = all

#--compilation rules-----------------------------------------------------------#

all:
	$(MAKE) libs
	$(MAKE) $(NAME)

$(NAME): $(OBJECTS) $(LIBFT) $(MLX)
	$(CC) $^ $(CFLAGS) $(MLX_FLAGS) -o $@

ifeq ($(BONUS), no)
$(OBJ_DIR)/%.o: %.c $(HEADERS)
	@ mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@
else 
$(OBJ_DIR)/%.o: %.c $(HEADERS_BONUS)
	@ mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@
endif


#--libs, debugs & bonus--------------------------------------------------------#

libs:
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(MLX_DIR)

debug:
	$(MAKE) re DEBUG=yes
	
bonus:
	$(MAKE) BONUS=yes

#--re, clean & fclean----------------------------------------------------------#

re:
	$(MAKE) fclean
	$(MAKE) all

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(MLX_DIR) clean
	$(RM) -rf $(OBJECTS)

fclean:
	$(MAKE) clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

#--norminette------------------------------------------------------------------#

norm:
	norminette $(INC_DIR) $(LIBFT_DIR) $(SRC_DIR) $(B_INC_DIR) $(B_SRC_DIR) 

#--PHONY-----------------------------------------------------------------------#

.PHONY: all libs debug bonus re clean fclean norme
 