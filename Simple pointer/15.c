#include <stdio.h>

int main(){
    float a;
    printf("Enter value = ");
    scanf("%f",&a);
    float *ptr = &a;
    printf("Float value = %0.2f\n",*ptr);
    (*ptr)*=10;
    printf("Float value = %0.2f\n",*ptr);
    return 0;
}