#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char character;
    scanf("%c",&character);
    printf("You entered: %c",character);
    return 0;
}