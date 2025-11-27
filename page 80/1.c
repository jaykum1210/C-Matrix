#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int num = sum(a,b);
    printf("Sum of %d and %d = %d\n",a,b,num);
    return 0;
}