#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double a;
    scanf("%f",&a);
    printf("You entered: %.4f",a);
    return 0;
}