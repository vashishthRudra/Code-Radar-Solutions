#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a & (1U << 31)){
        printf("Set");
    }
    else {
        printf("Not Set");
    }
}