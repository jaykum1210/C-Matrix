#include <stdio.h>

int mul(int a, int b){
    return a*b;
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int (*fp)(int , int);
    fp = mul;
    int num = fp(a,b);
    printf("Multiplication = %d\n",num);
    return 0;
}