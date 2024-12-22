#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
int main() {
    pid_t pid = fork();
    if (pid < 0) {
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        printf("Child process (PID: %d), Parent process (PPID: %d)\n", getpid(), getppid());
    } else {
        printf("Parent process (PID: %d) exiting\n", getpid());
        exit(EXIT_SUCCESS);
    }
    return 0;
}
