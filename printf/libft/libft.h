/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaek <sbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:02:04 by sbaek             #+#    #+#             */
/*   Updated: 2021/05/07 23:08:50 by sbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void			*ft_bzero(void *src, size_t n);
void			*ft_memset(void *ptr, int value, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *hay, int niddle, size_t n);
void			*ft_calloc(size_t count, size_t size);
size_t			ft_strlen(const char *src);
size_t			ft_strlcat(char *dest, const char *src, size_t len);
size_t			ft_strlcpy(char *dist, const char *src, size_t n);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
int				ft_atoi(const char *src);
int				ft_isalpha(int src);
int				ft_isdigit(int src);
int				ft_isalnum(int src);
int				ft_isascii(int src);
int				ft_isprint(int src);
int				ft_toupper(int src);
int				ft_tolower(int src);
int				ft_strncmp(const char *src, const char *comp, size_t n);
char			*ft_strnstr(const char *h, const char *niddle, size_t n);
char			*ft_strrchr(const char *src, int letter);
char			*ft_strchr(const char *src, int letter);
char			*ft_strdup(const char *src);

char			*ft_substr(char const *src, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *l, void *(*f)(void *), void (*del)(void *));

#endif
