#include <stdio.h>

int main(){
    float a;
    printf("Enter Number = ");
    scanf("%f",&a);
    float *ptr = &a;
    printf("Float = %0.2f\n",*ptr);
    return 0;
}