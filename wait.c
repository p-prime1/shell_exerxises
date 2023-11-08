#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main ()
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork_error");
		return (1);
	}
	if (child_pid == 0)
	{
		printf("Child Process running\n");
		sleep(3);
	}
	else
	{
		wait(&status);
		printf("Child process done running\n");
	}
	return (0);
}


