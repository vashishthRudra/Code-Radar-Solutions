#include <stdio.h>
int main(){
    char letter;
    scanf("%c",&letter);
    if ((A <= letter)&&(letter <= Z)){
        printf("Uppercase");
    }
    else {
        printf("Lowercase");
    }
}