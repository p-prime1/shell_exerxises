#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prinst user input to stdout
 * Return: Always 0
 */

int main(void)
{
	char *line;
	size_t len;
	ssize_t read;

	line = malloc(sizeof(size_t));
	len = 0;

	printf("$");
	read = getline(&line, &len, stdin);
	printf("%s", line);

	free(line);
	return (0);
}
