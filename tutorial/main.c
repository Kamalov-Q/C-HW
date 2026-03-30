#include<stdio.h>
#include<string.h>
#include<math.h>

float square(float num) {

    float result = num *num;
    return result;

}

float cubic(float num) {

    float result = num * num *num;
    return result;
}

float calculate(float num1, float num2) {

    float result = num1 * num2;
    return result;

}


int main() {
    int choice;
    float x, y;

    printf("Choose 1-3\n");
    printf("1.Find the square !\n");
    printf("2.Find the cub !\n");
    printf("3.Multiply 2 numbers !\n");

    printf("Which one do u choose : ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: 
            printf("Enter a value to find square: ");
            scanf("%f", &x);
            printf("The square of %.1f is %.1f\n", x, square(x));
            break;

        case 2: 
            printf("Enter a value to find the cub : ");
            scanf("%f", &x);
            printf("The cub of %.1f is %.1f\n", x, cubic(x));
            break;

        case 3: 
            printf("Enter values for x and y to multiply: ");
            scanf("%f", &x);
            scanf("%f", &y);
            printf("The result of multiplication of (%.1fx%.1f) is %.1f\n", x, y, calculate(x, y));
            break;

        default:
            printf("Enter a proper choice (1-3)\n");
    }


    return 0;
}