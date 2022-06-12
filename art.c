#include <stdio.h>

char *str(char *s)
{
	static char **src;

	src = &s;
	return (*src);
}

int main(void)
{
	char *b;

	b = "Hello";
	printf("%s\n", str(b));
	printf("%s\n", str(b));
	printf("%s\n", str(b));
	return (0);
}
