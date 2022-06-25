/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:25:47 by spetrosy          #+#    #+#             */
/*   Updated: 2022/06/25 19:21:39 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H 
# define GET_NEXT_LINE_H
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42

#endif

char *get_next_line(int fd);

char *ft_readtxt(int fd);

int ft_strlen(const char *s);

int ftn_strlen(const char *dest);

char *retline(char *str);

char *ft_strjoin(char const *s1, char const *s2);

char *new_stat(char *arr, int start);

#endif
