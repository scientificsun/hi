#include <stdio.h>

int main(int argc, char **argv)
{
    printf("Hello, World!\n");
	if(argc > 1)
	{
		printf("%d variable passed on command line\n", argc -1);
	}
}
