#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

void *str(char *src)
{
	static char **s;
	int x;
	int y;
	int i;

	i = 0;
	x = 0;
	y = 0;
	while (src[i])
	{
		if (src[i] == '\n')
		{
			x++;
		}
		s[x][y] = src[i];
		y++;
		i++;
	}
	return (s);
}

int main(void)
{
	char buf[100];
	int i;
	int x;
	int y;

	y = BUFFER_SIZE;
	printf("%d\n", y);
	x = 0;
	i = open("gtn.txt", O_RDONLY);
	read(i, buf, y);
	printf("BUF READ: %s\n", buf);
	while (x < y && buf[x] != '\n')
	{
		x++;
	}
	buf[x] = '\0';
	printf("BUF RETURNED: %s\n", buf);
	return (0);
}
