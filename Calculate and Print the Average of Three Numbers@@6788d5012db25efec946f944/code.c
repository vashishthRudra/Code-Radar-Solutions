#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    printf("Average: %.2f",(a+b+c)/2);
    return 0;
}