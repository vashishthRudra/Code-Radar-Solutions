#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c = ~(1 << a&b);
    printf("%d",c);
}