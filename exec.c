#include <stdio.h>
#include <unistd.h>

/**
 * main - Shows the execve usage
 *
 * Return: Always 0
 */

int main(void)
{
	char* argf[] = {"/bin/ls", "-l", "/usr/", NULL};
	

	if (execve(argf[0], argf, NULL) == -1)
	{
		perror("Error");
	}
	
	printf("After execve");
	return 0;
}	
