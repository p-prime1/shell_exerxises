#include <stdio.h>
#include <unistd.h>

/**
 * main - Checks for parent and child id
 *
 * Return: Returns 1 for error and 0 for completion
 */

int main(void)
{
	pid_t my_pid;
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == 1)
		perror("Error");
	my_pid = getpid();

	printf("My pid is %u: \n", my_pid);

	if (child_pid == 0)
		printf("(%u) Nooooo!\n", my_pid);
	else
		printf("(%u) %u, i am your father\n", my_pid, child_pid);
	return (0);

}
