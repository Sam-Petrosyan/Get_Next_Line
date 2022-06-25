/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:36:43 by spetrosy          #+#    #+#             */
/*   Updated: 2022/06/25 19:27:29 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

char *rest(char *str)
{
	char *s;
	int i;
	int j;

	j = ftn_strlen(str);
	s = (char *)malloc(sizeof(char) * (ft_strlen(str) - j));
	if (!s)
		return (0);
	i = 0;
	while (str[j])
	{
		s[i] = str[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}

char *get_next_line(int fd)
{
	static char src[BUFFER_SIZE + 1];
	static char *string;
	char *line;
	static int i;

	i = 0;
	if (src[i] != '\n')
		i++;
	if (src[i] == '\0')
	{
		read(fd, src, BUFFER_SIZE);
		src[BUFFER_SIZE] = '\0';
		printf("It's SRC: %s\n", src);
		string = src;
	}
	line = retline(string);
	if (ft_strlen == ftn_strlen)
		string = ft_strjoin(string, ft_readtxt(fd));
	else
		string = rest(string);
	printf("It's STRING: %s\n", string);
	return (line);
}

int main(void)
{
	int fd = open("gtn.txt", O_RDONLY);
	printf("Line returned: %s\n", get_next_line(fd));
	printf("Line returned: %s\n", get_next_line(fd));
	return (0);
}
