#include <stdio.h>

float avg(float a, float b){
    return (a+b)/2;
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    float num = avg(a,b);
    printf("Average of %d and %d = %0.2f\n",a,b,num);
    return 0;
}