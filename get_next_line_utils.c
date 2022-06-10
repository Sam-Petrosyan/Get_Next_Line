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
#include <stdio.h>
#include <stdlib.h>

char *src(char *str, static char *dest)
{
	int i = 0;

	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char *str = "Hello world!";
	static char dest[100];
	printf("%s\n", src(str, dest));
	printf("%s\n", src(str, dest));
	printf("%s\n", src(str, dest));
	printf("%s\n", src(str, dest));
	return (0);
}
