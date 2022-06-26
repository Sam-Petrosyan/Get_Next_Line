/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:25:47 by spetrosy          #+#    #+#             */
/*   Updated: 2022/06/26 12:44:59 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H 
# define GET_NEXT_LINE_H
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42

#endif

char *get_next_line(int fd);

char *rest(char *str);

char *readtxt(char *str, int fd);

char *ft_strchr(const char *s, int c);

int ftn_strlen(const char *s);

int ft_strlen(const char *src);

char *retline(char *str);

char *ft_strjoin(char *s1, char *s2);

char *ft_strdup(char *s1);

#endif
