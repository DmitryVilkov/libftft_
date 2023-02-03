/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilkov <dvilkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:04:57 by dvilkov           #+#    #+#             */
/*   Updated: 2023/02/03 19:18:08 by dvilkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//#include <unistd.h>

void	*ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
int		ft_strlen(char *str);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(char	*s1, char	*s2, unsigned	int n);
int		ft_atoi(char	*str);
size_t	ft_strlcpy(char *restrict dst, const char *src, size_t	dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t siz);


#endif