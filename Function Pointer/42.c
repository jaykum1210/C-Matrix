#include <stdio.h>

float temp(int a){
    float num = (a*(9.0/5.0))+32;
    return num;
}

int main(){
    int a;
    printf("Enter temperature in Celsius = ");
    scanf("%d",&a);
    float (*fp)(int);
    fp = temp;
    float num = fp(a);
    printf("Fahrenheit = %0.2f\n",num);
    return 0;
}