#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char string[500];
    scanf("%s",&string);
    printf("You entered: %s",string);
    return 0;
}