#include <stdio.h>
#include <unistd.h>

/**
 * main - Dmonstrates fork system call
 *
 * Return: 0 when program runs sucessfully
 */

int main(void)
{
	pid_t my_pid;
	pid_t child_pid;

	printf("Before fork\n");
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
	}
	printf("After fork\n");
	my_pid = getpid();
	printf("My pid is %u\n", my_pid);
	printf("My child_pid is %u\n", child_pid);
	return (0);
}
