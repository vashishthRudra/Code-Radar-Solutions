#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if ((a % 4==0)){
        printf("Leap Year");
    }
    else if(a % 100 ==0){
        printf("Not a Leap Year");
    }
    else {
        printf("Not a Leap Year");
    }

}