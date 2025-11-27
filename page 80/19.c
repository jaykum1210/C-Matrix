#include <stdio.h>

int mul(int a,int b){
    return a*b;
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int num = mul(a,b);
    printf("Multiplication of %d and %d = %d\n",a,b,num);
    return 0;
}