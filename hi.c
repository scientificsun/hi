#include <stdio.h>

int main(int argc, char **argv)
{
	char* argument = "Argument";
	char* arguments = "Arguments";

    printf("Hello, World!\n");
	if(argc > 1)
	{
		printf("%d %S passed on command line\n", argc -1, argc>2 ? arguments : argument);
	}
}
