/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:38:19 by spetrosy          #+#    #+#             */
/*   Updated: 2022/06/26 12:46:43 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

int ftn_strlen(const char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != '\n')
		i++;
	return (i);
}

int ft_strlen (const char *src)
{
	int i;

	i = 0;
	if (!src)
		return (0);
	while (src[i])
		i++;
	return (i);
}
char *retline(char *str)
{
	char *line;
	int i;
	int x;

	x = 0;
	i = ftn_strlen(str);
	line = malloc(sizeof(char) * (i + 1));
	while (x <= i)
	{
		line[x] = str[x];
		x++;
	}
	line[x] = '\0';
	return (line);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char) c)
		return ((char *)&s[i]);
	return (NULL);
}

char *readtxt(char *str, int fd)
{
	char *buf;
	int i;

	i = 1;
	while (ft_strchr(str, '\n') == NULL && i != 0)
	{
		buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!buf)
			return (0);
		i = read(fd, buf, BUFFER_SIZE);
		buf[i] = '\0';
		str = ft_strjoin(str, buf);
		free(buf);
	}
	//printf("It's new readed text: %s\n", str);
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	str = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char	*ft_strdup(char *s1)
{
	int		x;
	int		i;
	char	*p;

	i = ft_strlen(s1);
	p = (char *) malloc((i * sizeof(char)) + 1);
	x = 0;
	while (s1[x])
	{
		p[x] = s1[x];
		x++;
	}
	p[x] = '\0';
	return (p);
}

