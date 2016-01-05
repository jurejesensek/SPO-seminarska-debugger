#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stringLength(char *s)
{
	return strlen(s);
}
int main()
{
	char *str = NULL;

	printf("lenght: %d\n", stringLength(str));

	return 0;
}
