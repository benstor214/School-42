/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   < libft.h >                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibour <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:28:41 by ibour             #+#    #+#             */
/*   Updated: 2024/08/05 16:28:41 by ibour            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <malloc.h>
# include <stdbool.h>

typedef unsigned char	t_byte;

int					ft_atoi(const char *str);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isprint(int c);
int					ft_isalnum(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

unsigned int		ft_strlcat(char *dst, char *src, unsigned int n);
char				*ft_strdup(char *src);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, unsigned int n);
char				*ft_strcat(char *dst, char *src);
char				*ft_strncat(char *dst, const char *src, unsigned int n);
size_t				ft_strlen(const char *s);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(char *s, char *to_find);
char				*ft_strnstr(const char *s, const char *to_find, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

void				*ft_memset(void *s, int c, size_t n);
void				*ft_memcpy(void *dst, void *src, size_t n);
void				*ft_memccpy(void *dest, void *src, int c, size_t n);
void				*ft_memmove(void *dst, void *src, size_t s);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				ft_bzero(void *s, size_t n);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}	t_list;

#endif
