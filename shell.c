#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	int status, i;
	char *lineptr, *argv[10], *token, *newline;
	size_t n;
	pid_t child_pid;

	lineptr = NULL;
	n = 0;
	child_pid = fork();
	while (true)
	{
		printf("cisfun$ ");
		if (getline(&lineptr, &n, stdin) == EOF)
		{
			perror("Error");
			return (-1);
		}
		else
		{
			newline = (strtok(lineptr, "\n"));
			token = strtok(newline, " ");
			while (token != NULL)
			{
				argv[i] = token;
				token = strtok(NULL, " ");
				i++;
			}
			argv[i] = NULL;
			if (child_pid == 0)
			{
				execvp(argv[1], argv);
			}
			else
			{
				waitpid(child_pid, &status, 0);
			}

		}
	}
	return (0);
}




