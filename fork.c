#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char *argv[])

{
    	printf("\n");
	printf("I am sahar %d\n", (int) getpid());
	printf("\n");
	pid_t pid = fork();

	printf("fork returned: %d\n", (int) pid);

	if (pid < 0) {
		perror("fork failed\n");
	}
		printf("\n");
	if (pid == 0) {
		printf("im child  %d\n", (int) getpid());

	}
	printf("\n");

	printf("im the parent\n");
	return 0;
}
