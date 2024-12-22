#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main() {
    pid_t pid = fork();
    if (pid < 0) {
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        printf("Child process (PID: %d) exiting...\n", getpid());
        exit(EXIT_SUCCESS);
    } else {
        printf("Parent process (PID: %d)\n", getpid());
        printf("Child process (PID: %d) created a zombie state\n", pid);
        wait(NULL); printf("Zombie process reaped.\n");
    }
    return 0;
}
