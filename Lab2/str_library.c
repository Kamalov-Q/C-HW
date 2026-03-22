#include<stdio.h>

//strlen using pointer arithmetic
int my_strlen(const char *str) {
    const char *p = str;
    while (*p) p++;
    return p - str;
}

//strcpy returning pointer
char *my_strcpy(char *dest, const char *src) {
    char *start = dest;
    while ((*dest++ = *src++));
    return start;
}

//strcat using pointers
char *my_strcat(char *dest, const char *src) {
    char *start = dest;
    while (*dest) dest++; // move to end
    while ((*dest++ = *src++)); // copy src to dest
    return start;
}

//strcmp using pointers 
int my_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main() {
    char a[100] = "Hello";
    char b[100] = "World";

    printf("Length: %d\n", my_strlen(a));

    my_strcat(a, b);
    printf("Concat: %s\n", a);

    printf("Compare: %d\n", my_strcmp("abc", "abd"));

    return 0;

}