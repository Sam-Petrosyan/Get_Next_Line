#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

char *addstr(int fd)
{
	static char s[BUFFER_SIZE];
	read(fd, s, BUFFER_SIZE);
	return (s);
}

int main(void)
{
	int f = open("gtn.txt", O_RDONLY);
	printf("%s", addstr(f));
	return (0);
}
