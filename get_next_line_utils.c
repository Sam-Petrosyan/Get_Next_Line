/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:38:19 by spetrosy          #+#    #+#             */
/*   Updated: 2022/06/19 19:38:25 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

char *ft_readtxt(int fd)
{
	char *line;
	static char src[BUFFER_SIZE + 1];

	read(fd, src, BUFFER_SIZE);
	src[BUFFER_SIZE] = '\0';
	line = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	line = src;
	return (line);
}

int ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int ftn_strlen(char *dest)
{
	int i;
	
	i = 0;
	while (dest[i] && dest[i] != '\n')
		i++;
	return (i);
}

char *retline(char *str)
{
	char *line;
	int j;
	int x;

	j = ftn_strlen(str);
	line = (char *)malloc(sizeof(char) * (j + 1));
	x = 0;
	while (x <= j)
	{
		line[x] = str[x];
		x++;
	}
	line[x] = '\0';
	return (line);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	str = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char *new_stat(char *arr, int start)
{
	static char *f;
	int i;
	int x;
	int j;

	i = start;
	while (arr[start])
		start++;
	x = start - i;
	f = (char *)malloc(sizeof(char) * (x + 1));
	j = 0;
	while (j <= x)
	{
		f[j] = arr[i];
		j++;
		i++;
	}
	f[j] = '\0';
	return (f);
}
