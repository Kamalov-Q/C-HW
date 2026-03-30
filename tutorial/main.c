#include<stdio.h>
#include<string.h>

void happyBday(char name[], int age) {
    printf("\nHappy birthday to you!\n");
    printf("\nHappy birthday to you!\n");
    printf("\nHappy birthday to you!\n");
    printf("\nHappy birthday dear %s!\n", name);
    printf("\nYou are %d years old!\n", age);


};

int main() {

    char name[50];
    int age;

    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age : ");
    scanf("%d", &age);

    happyBday(name, age);


    return 0;
}