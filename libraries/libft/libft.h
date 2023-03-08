/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:34:09 by twang             #+#    #+#             */
/*   Updated: 2023/03/08 18:40:37 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdbool.h>
# include <stdio.h> 
# include <stdint.h>
# define HEXA_LOW "0123456789abcdef"
# define HEXA_UP "0123456789ABCDEF"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# define END "\033[0m"
# define GREY "\033[1;30m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define PURPLE "\033[1;35m"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*-----------------------------------------------------char check functions---*/

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);

/*-----------------------------------------------------------char functions---*/

int			ft_toupper(int c);
int			ft_tolower(int c);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);

/*----------------------------------------------------------array functions---*/

void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);

/*---------------------------------------------------string check functions---*/

int			ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

/*--------------------------------------------string manipulation functions---*/

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

/*--------------------------------------------------------convert functions---*/

int			ft_atoi(const char *str);
char		*ft_itoa(int n);
size_t		ft_putnbr_fd(int n, int fd);
size_t		ft_putnbr_unsigned_fd(unsigned int n, int fd);
size_t		ft_putnbr_base(unsigned long nbr, char *base, int fd);

/*------------------------------------------------------------chained lists---*/

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *nw);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *nw);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/*----------------------------------------------memory management functions---*/

void		*ft_calloc(size_t count, size_t size);
void		*ft_free(void **s, size_t len);

/*--------------------------------------------------------display functions---*/

size_t		ft_putchar_fd(int c, int fd);
size_t		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
int			ft_printf(const char *str, ...);
int			ft_dprintf(int fd, const char *str, ...);

/*---------------------------------------------------------------file check---*/

int			open_file(const char *av);
char		*get_next_line(int fd);
char		*get_calloc(size_t count, size_t size);
char		*get_strchr(char *s, int c);
char		*get_strjoin(char *s1, char *s2);
bool		check_extension(char *file, char *extension);

#endif