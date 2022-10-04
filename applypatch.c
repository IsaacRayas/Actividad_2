#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char* argv[])
{
	char* arg_list[] = {
			"git",
			"apply",
			argv[1],
			NULL
		};

	pid_t child_pid = fork ();

	if (child_pid != 0)				//Parent wait for the child
		wait(NULL);
	else {						//Child executes the command 
		execvp ("git", arg_list);
		printf("returning from execvp");
		abort ();
	}
	return 0;
}
