#include <stdio.h>
int main(){
    char letter;
    scanf("%c",&letter);
    if (('A' <= letter)&&(letter <= 'Z')){
        printf("Uppercase");
    }
    else if (('a'<= letter)&&(letter<='z')){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
}