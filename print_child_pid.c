#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints child pid and and ppid
 *
 * Return: 0 on completion
 */

int main(void)
{
	pid_t child_pid;

	printf("Parent  id id: %u\n", getpid());

	child_pid = fork();

	printf("Child pid is: %u\n", child_pid);
	return (0);
}
