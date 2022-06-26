/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:36:43 by spetrosy          #+#    #+#             */
/*   Updated: 2022/06/26 12:46:38 by spetrosy         ###   ########.fr       */
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

	j = ftn_strlen(str) + 1;
	s = (char *)malloc(sizeof(char) * (ft_strlen(str) - j + 1));
	if (!s)
		return (0);
	i = 0;
	while (str[j + i])
	{
		s[i] = str[j + i];
		i++;
	}
	s[i] = '\0';
	str = s;
	free(s);
	return (str);
}

char *get_next_line(int fd)
{
	static char *str;
	char *line;

	line = NULL;
	if (fd <= 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = readtxt(str, fd);
	line = retline(str);
	str = rest(str);
	return (line);
}

int main(void)
{
	int i = 0;

	int fd = open("gtn.txt", O_RDONLY);
	while (i < 10)
	{
		printf("Line returned: %s", get_next_line(fd));
		i++;
	}
 //pprintf("Line returned: %s", get_next_line(fd));
	return (0);
}
