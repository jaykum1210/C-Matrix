#include <stdio.h>

struct number
{
    double n;
};

int main(){
    struct number a;
    printf("Enter double number = ");
    scanf("%lf",&a.n);
    printf("Double = %lf\n",a.n);
    return 0;
}