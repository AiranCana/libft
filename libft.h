/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:41:50 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/14 14:07:11 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
int		atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *line);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t n);


#endif