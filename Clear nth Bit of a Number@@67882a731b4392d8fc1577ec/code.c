#include <stdio.h>
int clear(int a,int b){
    int c =~(1 << b);
    return a & c;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int result = clear(a,b);
    printf("%d",result);
}