/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:38:19 by spetrosy          #+#    #+#             */
/*   Updated: 2022/06/17 20:36:29 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "get_next_line.h"

char *src(char fd)
{
	static char *str;
	char *line;
	int fd;
	int i;
	int j;

	read(fd, str, 20);

	i = 0;
	while (1)
	{
		if (str[i] == '\n')
			break;
		i++;
	}
	line = (char *)malloc (sizeof(char) * (i + 1));
	return (line);
}

int main(void)
{
	int f = open("gtn.txt", O_RDONLY);
	char *a = str(f);
	char *b = src(a);
	printf("%s\n", a);
	printf("%s\n", src(b));
	return (0);
}
