#include <stdio.h>

float mul(int a, float b){
    return a*b;
}

int main(){
    int a;
    printf("Enter integer = ");
    scanf("%d",&a);
    float b;
    printf("Enter float = ");
    scanf("%f",&b);
    float num = mul(a,b);
    printf("Product of %d and %0.2f = %0.2f\n",a,b,num);
    return 0;
}