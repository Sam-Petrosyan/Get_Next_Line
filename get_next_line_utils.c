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

#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

char *addstr1(int fd)
{
	int i;
	static char src[BUFFER_SIZE];
	
	i = 0;
	read(fd, src, BUFFER_SIZE);
	while (i <= BUFFER_SIZE && src[i] != '\n')
	{
		i++;
	}
	while (src[i] != '\n')
	{
		
	}
	src[i] = '\0';
	return (src);
}

int main(void)
{
	int a = open("gtn.txt", O_RDONLY);
	printf("%s\n", addstr1(a));
	printf("%s\n", addstr1(a));
	return (0);
}
