#include <stdio.h>

int main(int argc, char **argv)
{
	int 	i;
    printf("Hello, World!\n");
	if(argc > 1)
	{
		printf("%d %s passed on command line\n", argc -1, argc>2 ? "Arguments" : "Argument");
	}
	for(i=1; i<argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
