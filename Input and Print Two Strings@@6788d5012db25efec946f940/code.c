#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[500],b[500];
    scanf("%s %s",&a , &b);
    printf("You entered: %s",a);
    printf("and %s",b)
    return 0;
}