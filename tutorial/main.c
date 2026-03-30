#include<stdio.h>
#include<string.h>
#include<math.h>

void hello(char name[], int age); // function prototype

int main() {
   
    char name[40] = "Spongebob";
    int age = 30;

    hello(name, age);
    
    return 0;
}


void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
};