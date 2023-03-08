# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 15:41:17 by twang             #+#    #+#              #
#    Updated: 2023/01/31 13:17:04 by wangthea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =				libft.a

HEADERS =			libft.h 	\

SOURCES = 			ft_isalpha.c			\
					ft_isdigit.c			\
					ft_isalnum.c			\
					ft_isascii.c			\
					ft_isprint.c			\
					ft_strlen.c 			\
					ft_memset.c				\
					ft_bzero.c  			\
					ft_memcpy.c				\
					ft_memmove.c			\
					ft_strlcpy.c 			\
					ft_strlcat.c 			\
					ft_toupper.c 			\
					ft_tolower.c 			\
					ft_strchr.c 			\
					ft_strrchr.c			\
					ft_strncmp.c			\
					ft_memchr.c				\
					ft_memcmp.c				\
					ft_strnstr.c			\
					ft_atoi.c				\
					ft_calloc.c				\
					ft_strdup.c				\
					ft_substr.c				\
					ft_strjoin.c			\
					ft_strtrim.c			\
					ft_split.c				\
					ft_itoa.c				\
					ft_strmapi.c			\
					ft_striteri.c			\
					ft_putchar_fd.c			\
					ft_putstr_fd.c			\
					ft_putendl_fd.c			\
					ft_putnbr_fd.c			\
					ft_putnbr_base_fd.c 	\
					ft_putnbr_unsigned_fd.c \
					ft_lstnew.c				\
					ft_lstadd_front.c		\
					ft_lstsize.c			\
					ft_lstlast.c			\
					ft_lstadd_back.c		\
					ft_lstdelone.c			\
					ft_lstclear.c			\
					ft_lstiter.c			\
					ft_lstmap.c				\
					ft_printf.c				\
					get_next_line.c			\
					get_next_line_utils.c	\
					open_file.c				\
					check_extension.c		\
				
OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I .

all :	$(NAME)

$(NAME) : $(OBJECTS)
	$(AR) rcs $@ $^

%.o : %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJECTS)

fclean : clean 
	$(RM) $(NAME)

re : fclean
	$(MAKE) all

.PHONY: all clean fclean re
