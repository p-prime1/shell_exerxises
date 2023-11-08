#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
	char *lineptr, *token ;
	size_t n, read;

	lineptr = NULL;
	n = 0;	
	printf("$ ");
	while (true)
	{
		read = getline(&lineptr, &n, stdin);
		if (read == EOF)
			break;
		token = strtok(lineptr, "\n");
		printf("%s\n",token);
		printf("$ ");
	}
	return 0;
}


