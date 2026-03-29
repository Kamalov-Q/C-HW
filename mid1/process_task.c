#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>


int main() {
    pid_t first_child_pid, second_child_pid;

    // Create the first child process
    first_child_pid = fork();

    if (first_child_pid < 0) {
        perror("fork failed for first child");
        return 1;
    }


    if (first_child_pid == 0) {
        printf("I am first process\n");
        printf("My process id is : %d\n", getpid());
        printf("My parent process id is : %d\n", getppid());
        exit(0);
    }

    // Only parent reaches here and creates second child
    second_child_pid = fork();

    if (second_child_pid < 0) {
        perror("fork failed for second child");
        return 1;
    }

    if (second_child_pid == 0) {
        char *home = getenv("HOME");

        if (home != NULL) {
            printf("HOME = %s\n", home);
        } else {
            printf("HOME environment variable is not set\n");
        }

        exit(0);
    }

    // Parent process 
    printf("Parent process : \n");
    printf("First child process ID : %d\n", first_child_pid);
    printf("Second child process ID : %d\n", second_child_pid);

    wait(NULL); // Wait for the first child to finish
    wait(NULL); // Wait for the second child to finish

    return 0;

}



