#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double a;
    scanf("%lf",&a);
    printf("Area: %lf",3.14*a*a);
    return 0;
}