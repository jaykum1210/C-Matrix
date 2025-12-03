#include <stdio.h>

int main(){
    double a;
    printf("Enter number = ");
    scanf("%lf",&a);
    double *ptr = &a;
    printf("Value = %0.2lf\n",*ptr);
    return 0;
}