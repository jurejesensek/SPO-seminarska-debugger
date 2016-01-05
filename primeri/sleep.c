#include <unistd.h>
#include <stdio.h>

void func(int time)
{
	printf("hello ");
	fflush(stdout);

	sleep(time);
}

int main()
{
	int i = 100;
	int t = 3;
	
	while(--i) {
		func(t);
	}
	return 0;
}
