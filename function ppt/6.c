#include <stdio.h>

float fe(int a){
    float temp = a*9.0/5.0 + 32;
    return temp;
}

int main(){
    int a;
    printf("Enter Temperature in Celsius = ");
    scanf("%d",&a);
    float b = fe(a);
    printf("Fahrenheit = %0.2f\n",b);
    return 0;
}