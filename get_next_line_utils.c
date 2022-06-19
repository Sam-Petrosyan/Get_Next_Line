/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:38:19 by spetrosy          #+#    #+#             */
/*   Updated: 2022/06/10 18:15:14 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

char *readtxt(int fd)
{
	static char src[BUFFER_SIZE + 1];

	read(fd, src, BUFFER_SIZE);
	
	return (src);
}

int f_strlen(char *string)
{
	int i;

	i = 0;
	while (string[i])
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

int main(void)
{
	int i = open("gtn.txt", O_RDONLY);
	char *a = readtxt(i);
	printf("It's a readtxt: %s\n", a);
	printf("It's a ftn_strlen: %d\n", ftn_strlen(a));
	printf("It's a retline: %s\n", retline(a));
	return (0);
}
