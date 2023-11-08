#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints number of arguments passed to function
 * @argc: Contains number of arguments passed to function
 * @argv: Pointer to array containing arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	printf("Number of arguments passed is %d\n", argc);
	return (0);
}
