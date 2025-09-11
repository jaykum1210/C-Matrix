#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    double b = pow(a,0.5);
    printf("%0.4f\n",b);
    return 0;
}