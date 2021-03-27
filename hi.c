#include <stdio.h>

int main(int argc, char **argv)
{
    printf("Hello, World!\n");
	if(argc > 1)
	{
		printf("%d %s passed on command line\n", argc -1, argc>2 ? "Arguments" : "Argument");
	}
}
