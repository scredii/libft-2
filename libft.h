/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 18:28:00 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/06 19:51:03 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef enum		e_sign
{
	e_sign_neg = -1,
	e_sign_pos = 1
}					t_sign;

typedef enum		e_bool
{
	false,
	true
}					t_bool;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_list2
{
	void			*content;
	size_t			content_size;
	struct s_list2	*prev;
	struct s_list2	*next;
}					t_list2;

typedef struct		s_buff
{
	size_t			length;
	unsigned char	*c;
}					t_buff;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *s1, const void *s2, size_t n);
void				*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void				*ft_memmove(void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *s1, const char *s2);
char				*ft_strncpy(char *s1, const char *s2, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void				ft_lstpush(t_list **alst, t_list *new);
t_list				*ft_lstpop(t_list **alst);
t_list				*ft_lstshift(t_list **alst);

t_list2				*ft_lst2new(void const *content, size_t content_size);
void				ft_lst2delone(t_list2 **alst, void (*del)(void *, size_t));
void				ft_lst2del(t_list2 **alst, void (*del)(void *, size_t));
void				ft_lst2add(t_list2 **alst, t_list2 *new);
void				ft_lst2iter(t_list2 *lst, void (*f)(t_list2 *elem));
t_list2				*ft_lst2map(t_list2 *lst, t_list2 *(*f)(t_list2 *elem));
void				ft_lst2push(t_list2 **alst, t_list2 *new);
t_list2				*ft_lst2pop(t_list2 **alst);
t_list2				*ft_lst2shift(t_list2 **alst);

t_bool				ft_isupper(int c);
t_bool				ft_islower(int c);

size_t				ft_strchrcnt(const char *s, char c);

t_list				*ft_strsplitlst(char const *s, char c);

t_buff				*ft_buffnew(size_t length);
void				ft_buffdel(t_buff *b);
t_buff				*ft_strtobuff(char *s);
t_buff				*ft_carrtobuff(char *c, size_t length);
char				*ft_bufftostr(t_buff b);
void				ft_buffclr(t_buff *b);
void				ft_buffchr(t_buff *b, int c);
void				ft_buffbuff(t_buff *b1, t_buff *b2);
void				ft_buffcpy(t_buff *dst, t_buff *src);
t_buff				*ft_buffdup(t_buff *b);
void				ft_putbuff(t_buff *b);
void				ft_putbuff_fd(t_buff *b);
void				ft_bufftrim(t_buff *b);
void				ft_buffiter(t_buff *b, void (*f)(char *));
void				ft_buffiter(t_buff *b, void (*f)(unsigned int, char *));
t_buff				*ft_buffmap(t_buff const *b, char (*f)(char));
t_buff				*ft_buffmapi(t_buff const *b, \
char (*f)(unsigned int, char));

t_buff				*ft_buffncpy(char *s1, const char *s2, size_t n);
t_buff				*ft_buffcat(char *s1, const char *s2);
t_buff				*ft_buffncat(char *s1, const char *s2, size_t n);
size_t				ft_bufflcat(char *dst, const char *src, size_t size);
t_buff				*ft_buffchr(const char *s, int c);
t_buff				*ft_buffrchr(const char *s, int c);
t_buff				*ft_buffbuff(const char *s1, const char *s2);
t_buff				*ft_buffnbuff(const char *s1, const char *s2, size_t n);
int					ft_buffcmp(const char *s1, const char *s2);
int					ft_buffncmp(const char *s1, const char *s2, size_t n);

int					ft_getnextline(int fd, char **line);

#endif