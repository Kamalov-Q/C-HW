#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(void) {

    pid_t first_process, second_process;

    first_process = fork();

    if (first_process < 0) {
        perror("Error on first process");
        return 1;
    }

    if (first_process == 0) {
        printf("I'm first process\n");
        printf("My pid is : %d\n", getpid());
        printf("My parent id : %d\n", getppid());
        exit(0);
    }

    second_process = fork();

    if (second_process < 0) {
        perror("Error on second process");
        return 1;
    }

    if (second_process == 0) {
        char *home = getenv("HOME");

     printf("I'm second process\n");
     if (home != NULL) {
        printf("HOME = %s\n", home);
     } else {
        printf("HOME environment variable is not set\n");
     }

     exit(0);

    }

    printf("Parent : \n");
    printf("First child id : %d\n", first_process);
    printf("Second child id : %d\n", second_process);

    // wait(NULL);
    // wait(NULL);

    waitpid(first_process, NULL, 0);
    waitpid(second_process, NULL, 0);

    return 0;
}