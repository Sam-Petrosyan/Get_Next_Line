/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:36:43 by spetrosy          #+#    #+#             */
/*   Updated: 2022/06/19 19:38:22 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char *line1;
	char *line2;

	line1 = ft_readtxt(fd);
	line2 = retline(line1);


	printf("new buffer: %s\n", line1);
	return (line2);
}

int main(void)
{
	int fd = open("gtn.txt", O_RDONLY);
	printf("Line returned: %s\n", get_next_line(fd));
	printf("Line returned: %s\n", get_next_line(fd));
	return (0);
}
