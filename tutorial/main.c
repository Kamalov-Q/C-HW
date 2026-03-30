#include<stdio.h>
#include<string.h>
#include<math.h>
#include<unistd.h>


int main() {

    for (int i =10; i >= 0; i--){
        sleep(1);
        printf("%d\n", i);
    }

    printf("Happy New Year!\n");
   
    
    return 0;
}
