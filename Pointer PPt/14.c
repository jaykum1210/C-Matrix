#include <stdio.h>

int main(){
    float a;
    printf("Enter number = ");
    scanf("%f",&a);
    float *ptr = &a;
    printf("Value = %0.3f\n",*ptr);
    return 0;
}